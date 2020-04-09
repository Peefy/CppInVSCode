#include <cstdio>  
#include <cmath> 
#include <iostream>  
#include <vector>
#include <stack>
#include <cstring>
#include <map>

using namespace std;  

#define FOR_RANGE(x1, x2) for(int i = x1; i < x2; i++)  
#define TOMIN(x1, x2) x1 = x1 < x2 ? x1 : x2;  
#define N 1001  
#define M 10001 

struct edge
{ 
    int u, v;
} a[M];  
int from[N]; 
int to[M];  
int n, m;  
int dfn[N], low[N];  
int num;  
stack<int> s; int ins[N];  

map<int, int> maxscc;
map<int, int> scc;
int k = 0;
int anwserOrder[N] = {-1};
double Mv[N][N] = {{0}};
double v[M] = {0};
double vout[M] = {0};
const double eps = 0.00000001;

void addedge(int u, int v, int e) 
{
    to[e] = from[u]; 
    from[u] = e; 
    a[e].u = u; 
    a[e].v = v;
}  

void tarjin(int u)  
{  
    dfn[u] = low[u] = ++num;  
    s.push(u);  
    ins[u] = 1;  
    for(int e = from[u]; e != -1; e = to[e])  
    {  
        int  v= a[e].v;  
        if(!dfn[v])  
        {  
            tarjin(v);  
            TOMIN(low[u], low[v]);  
        }  
        else if(ins[v])  
        {  
            TOMIN(low[u], dfn[v]);  
        }  
    }  
    if (dfn[u] == low[u])  
    {  
        int scccount = 0;
        while(1)  
        {  
            int v = s.top();  
            s.pop();  
            ins[v] = 0;  
            scc[v] = scccount++;
            if(u == v) 
                break;  
        }  
        if (scc.size() > 1)
        {
            maxscc = scc;
        }
        scc.clear();
    }  
}  

void findmaxscc()
{
    FOR_RANGE(1, n + 1)  
    {  
        if(!dfn[i])  
            tarjin(i);  
    } 
}

inline bool inscc(int v)
{
    return maxscc.find(v) != maxscc.end();
}

double norm(double* v1, double* v2, int vm)
{
    double sum = 0;
    for (int i = 0;i < vm;++i)
    {
        sum += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    return sqrt(sum);
}

bool matrixMultiplyVector(double matrix1[N][N], double vector[M], double(&result)[M], int vm) {
    for (int k = 0; k < vm; k++) 
    {
        result[k] = 0.0;
        for (int j = 0; j < vm; j++) 
        {
            result[k] = result[k] + matrix1[k][j] * vector[j];
        }
    }
    return true;
}

void pageRank()
{
    int sccCount = maxscc.size();
    double factor = 1.0 / (double)sccCount;
    for (int i = 0;i < sccCount;++i)
    {
        v[i] = factor;
    }
    for (int i = 0;i < m;++i)
    {
        if (inscc(a[i].u) && inscc(a[i].v))
        {
            Mv[maxscc[a[i].v]][maxscc[a[i].u]] = 1;
        }
    }   
    for (int i = 0;i < sccCount;++i)
    {
        double sum = 0;
        for (int j = 0;j < sccCount;++j)
        {
            sum += Mv[j][i];
        }
        for (int j = 0;j < sccCount;++j)
        {
            Mv[j][i] /= sum;
        }
    }
    while (true)
    {
        matrixMultiplyVector(Mv, v, vout, sccCount);
        if (norm(v, vout, sccCount) > eps)
            memcpy(v, vout, sizeof(double) * sccCount);
        else
            break;
    }
}

void generateInput() 
{
    num = 0;  
    memset(dfn, 0, sizeof(dfn));  
    memset(from, -1, sizeof(from));  
    memset(ins, 0, sizeof(ins)); 
    scanf("%d", &n);scanf("%d", &m);
    FOR_RANGE(0, m){int u,v; scanf("%d", &u);scanf("%d", &v); addedge(u, v, i);} 
    scanf("%d", &k);
    FOR_RANGE(0, k){scanf("%d", &anwserOrder[i]);}
}  

void generateOutput()
{
    for (int i = 0;i < k;++i)
    {
        inscc(anwserOrder[i]) == false ? printf("None\r\n") : printf("%.5f\r\n", vout[maxscc[anwserOrder[i]]]);
    }
}

int main()  
{  
    generateInput();  
    findmaxscc();
    pageRank();
    generateOutput();
    return 0;
}  