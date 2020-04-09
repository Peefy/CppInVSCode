
#include <stdio.h>
#include <math.h>
#include <memory.h>

#define N 401

int W[N][N] = {{0}};
int L[N][N] = {{0}};
int Llast[N][N] = {{0}};

void generateInput(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &W[i][j]);
        }
    }
}

void extendShotestPath(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            L[i][j] = -1;
            for (int k = 0; k < n; ++k)
            {
                if (Llast[i][k] == -1 || W[k][j] == -1)
                    L[i][j] = L[i][j];
                else if (L[i][j] == -1)
                    L[i][j] = Llast[i][k] + W[k][j];
                else
                    L[i][j] = L[i][j] < Llast[i][k] + W[k][j] ? L[i][j] : Llast[i][k] + W[k][j];
            }
        }
    }
}

void allPairsShortestPath(int n)
{
    memcpy(Llast, W, sizeof(int) * N * N);
    for (int m = 1; m < n - 1; ++m)
    {
        extendShotestPath(n);
        memcpy(Llast, L, sizeof(int) * N * N);
    }
}

void floydWarshall(int n)
{
    memcpy(L, W, sizeof(int) * N * N);
    memcpy(Llast, W, sizeof(int) * N * N);
    for (int k = 0; k < n; ++k)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (Llast[i][k] == -1 || Llast[k][j] == -1)
                    L[i][j] = Llast[i][j];
                else if (Llast[i][j] == -1)
                    L[i][j] = Llast[i][k] + Llast[k][j];
                else
                {
                    if (Llast[i][j] > Llast[i][k] + Llast[k][j])
                        L[i][j] = Llast[i][k] + Llast[k][j];
                    else
                        L[i][j] = Llast[i][j];
                }
            }
        }
        memcpy(Llast, L, sizeof(int) * N * N);
    }
}

void generateOutPut(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", L[i][j]);
        }
        printf("\r\n");
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    generateInput(n);
    //allPairsShortestPath(n);
    floydWarshall(n);
    generateOutPut(n);
    return 0;
}