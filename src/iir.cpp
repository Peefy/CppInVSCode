//滤波方式有 高通、低通、均值、中值、卡尔曼
#include "iir.h"

/** \brief 将滤波器的内部状态清零，滤波器的系数保留
 * \return
 */
void IIR_I::reset()
{
    for(int i = 0; i <= m_num_order; i++)
    {
        m_pNum[i] = 0.0;
    }
    for(int i = 0; i <= m_den_order; i++)
    {
        m_pDen[i] = 0.0;
    }
}
IIR_I::IIR_I()
{
    m_pNum = NULL;
    m_pDen = NULL;
    m_px = NULL;
    m_py = NULL;
    m_num_order = -1;
    m_den_order = -1;
};
/** \brief
 *
 * \param num 分子多项式的系数，升序排列,num[0] 为常数项
 * \param m 分子多项式的阶数
 * \param den 分母多项式的系数，升序排列,den[0] 为常数项
 * \param m 分母多项式的阶数
 * \return
 */
void IIR_I::setPara(double num[], int num_order, double den[], int den_order)
{
    delete[] m_pNum;
    delete[] m_pDen;
    delete[] m_px;
    delete[] m_py;
    m_pNum = new double[num_order + 1];
    m_pDen = new double[den_order + 1];
    m_num_order = num_order;
    m_den_order = den_order;
    m_px = new double[num_order + 1];
    m_py = new double[den_order + 1];
    for(int i = 0; i <= m_num_order; i++)
    {
        m_pNum[i] = num[i];
        m_px[i] = 0.0;
    }
    for(int i = 0; i <= m_den_order; i++)
    {
        m_pDen[i] = den[i];
        m_py[i] = 0.0;
    }
}
 
/** \brief 滤波函数，采用直接I型结构
 *
 * \param data 传入输入数据
 * \return 滤波后的结果
 */
double IIR_I::filter(double data)
{
    m_py[0] = 0.0; // 存放滤波后的结果
    m_px[0] = data;
    for(int i = 0; i <= m_num_order; i++)
    {
        m_py[0] = m_py[0] + m_pNum[i] * m_px[i];
    }
    for(int i = 1; i <= m_den_order; i++)
    {
        m_py[0] = m_py[0] - m_pDen[i] * m_py[i];
    }
    for(int i = m_num_order; i >= 1; i--)
    {
        m_px[i] = m_px[i-1];
    }
    for(int i = m_den_order; i >= 1; i--)
    {
        m_py[i] = m_py[i-1];
    }
    return m_py[0];
}
 
 
/** \brief 滤波函数，采用直接I型结构
 *
 * \param data[] 传入输入数据，返回时给出滤波后的结果
 * \param len data[] 数组的长度
 * \return
 */
void IIR_I::filter(double data[], int len)
{
    int i, k;
    for(k = 0; k < len; k++)
    {
        m_px[0] = data[k];
        data[k] = 0.0;
        for(i = 0; i <= m_num_order; i++)
        {
            data[k] = data[k] + m_pNum[i] * m_px[i];
        }
        for(i = 1; i <= m_den_order; i++)
        {
            data[k] = data[k] - m_pDen[i] * m_py[i];
        }
        // we get the y value now
        m_py[0] = data[k];
        for(i = m_num_order; i >= 1; i--)
        {
            m_px[i] = m_px[i-1];
        }
        for(i = m_den_order; i >= 1; i--)
        {
            m_py[i] = m_py[i-1];
        }
    }
}
/** \brief 滤波函数，采用直接I型结构
 *
 * \param data_in[] 输入数据
 * \param data_out[] 保存滤波后的数据
 * \param len 数组的长度
 * \return
 */
void IIR_I::filter(double data_in[], double data_out[], int len)
{
    int i, k;
    for(k = 0; k < len; k++)
    {
        m_px[0] = data_in[k];
        m_py[0] = 0.0;
        for(i = 0; i <= m_num_order; i++)
        {
            m_py[0] = m_py[0] + m_pNum[i] * m_px[i];
        }
        for(i = 1; i <= m_den_order; i++)
        {
            m_py[0] = m_py[0] - m_pDen[i] * m_py[i];
        }
        for(i = m_num_order; i >= 1; i--)
        {
            m_px[i] = m_px[i-1];
        }
        for(i = m_den_order; i >= 1; i--)
        {
            m_py[i] = m_py[i-1];
        }
        data_out[k] = m_py[0];
    }
}

/** \brief 计算 IIR 滤波器的时域响应，不影响滤波器的内部状态
 * \param data_in 为滤波器的输入，0 时刻之前的输入默认为 0，data_in[M] 及之后的输入默认为data_in[M-1]
 * \param data_out 滤波器的输出
 * \param M 输入数据的长度
 * \param N 输出数据的长度
 * \return
 */
void IIR_I::resp(double data_in[], int M, double data_out[], int N)
{
    int i, k, il;
    for(k = 0; k < N; k++)
    {
        data_out[k] = 0.0;
        for(i = 0; i <= m_num_order; i++)
        {
            if( k - i >= 0)
            {
                il = ((k - i) < M) ? (k - i) : (M - 1);
                data_out[k] = data_out[k] + m_pNum[i] * data_in[il];
            }
        }
        for(i = 1; i <= m_den_order; i++)
        {
            if( k - i >= 0)
            {
                data_out[k] = data_out[k] - m_pDen[i] * data_out[k - i];
            }
        }
    }
}

IIR_II::IIR_II()
{
    //ctor
    m_pNum = NULL;
    m_pDen = NULL;
    m_pW = NULL;
    m_num_order = -1;
    m_den_order = -1;
    m_N = 0;
};
 
/** \brief 将滤波器的内部状态清零，滤波器的系数保留
 * \return
 */
void IIR_II::reset()
{
    for(int i = 0; i < m_N; i++)
    {
        m_pW[i] = 0.0;
    }
}
/** \brief
 *
 * \param num 分子多项式的系数，升序排列,num[0] 为常数项
 * \param m 分子多项式的阶数
 * \param den 分母多项式的系数，升序排列,den[0] 为常数项
 * \param m 分母多项式的阶数
 * \return
 */
void IIR_II::setPara(double num[], int num_order, double den[], int den_order)
{
    delete[] m_pNum;
    delete[] m_pDen;
    delete[] m_pW;
    m_num_order = num_order;
    m_den_order = den_order;
    m_N = max(num_order, den_order) + 1;
    m_pNum = new double[m_N];
    m_pDen = new double[m_N];
    m_pW = new double[m_N];
    for(int i = 0; i < m_N; i++)
    {
        m_pNum[i] = 0.0;
        m_pDen[i] = 0.0;
        m_pW[i] = 0.0;
    }
    for(int i = 0; i <= num_order; i++)
    {
         m_pNum[i] = num[i];
    }
    for(int i = 0; i <= den_order; i++)
    {
        m_pDen[i] = den[i];
    }
}
/** \brief 计算 IIR 滤波器的时域响应，不影响滤波器的内部状态
 * \param data_in 为滤波器的输入，0 时刻之前的输入默认为 0，data_in[M] 及之后的输入默认为data_in[M-1]
 * \param data_out 滤波器的输出
 * \param M 输入数据的长度
 * \param N 输出数据的长度
 * \return
 */
void IIR_II::resp(double data_in[], int M, double data_out[], int N)
{
    int i, k, il;
    for(k = 0; k < N; k++)
    {
        data_out[k] = 0.0;
        for(i = 0; i <= m_num_order; i++)
        {
            if( k - i >= 0)
            {
                il = ((k - i) < M) ? (k - i) : (M - 1);
                data_out[k] = data_out[k] + m_pNum[i] * data_in[il];
            }
        }
        for(i = 1; i <= m_den_order; i++)
        {
            if( k - i >= 0)
            {
                data_out[k] = data_out[k] - m_pDen[i] * data_out[k - i];
            }
        }
    }
}
/** \brief 滤波函数，采用直接II型结构
 *
 * \param data 输入数据
 * \return 滤波后的结果
 */
double IIR_II::filter(double data)
{
    m_pW[0] = data;
    for(int i = 1; i <= m_den_order; i++) // 先更新 w[n] 的状态
    {
        m_pW[0] = m_pW[0] - m_pDen[i] * m_pW[i];
    }
    data = 0.0;
    for(int i = 0; i <= m_num_order; i++)
    {
        data = data + m_pNum[i] * m_pW[i];
    }
    for(int i = m_N - 1; i >= 1; i--)
    {
        m_pW[i] = m_pW[i-1];
    }
    return data;
}
/** \brief 滤波函数，采用直接II型结构
 *
 * \param data[] 传入输入数据，返回时给出滤波后的结果
 * \param len data[] 数组的长度
 * \return
 */
void IIR_II::filter(double data[], int len)
{
    int i, k;
    for(k = 0; k < len; k++)
    {
        m_pW[0] = data[k];
        for(i = 1; i <= m_den_order; i++) // 先更新 w[n] 的状态
        {
            m_pW[0] = m_pW[0] - m_pDen[i] * m_pW[i];
        }
        data[k] = 0.0;
        for(i = 0; i <= m_num_order; i++)
        {
            data[k] = data[k] + m_pNum[i] * m_pW[i];
        }
 
        for(i = m_N - 1; i >= 1; i--)
        {
            m_pW[i] = m_pW[i-1];
        }
    }
}
/** \brief 滤波函数，采用直接II型结构
 *
 * \param data_in[] 输入数据
 * \param data_out[] 保存滤波后的数据
 * \param len 数组的长度
 * \return
 */
void IIR_II::filter(double data_in[], double data_out[], int len)
{
    int i, k;
    for(k = 0; k < len; k++)
    {
        m_pW[0] = data_in[k];
        for(i = 1; i <= m_den_order; i++) // 先更新 w[n] 的状态
        {
            m_pW[0] = m_pW[0] - m_pDen[i] * m_pW[i];
        }
        data_out[k] = 0.0;
        for(i = 0; i <= m_num_order; i++)
        {
            data_out[k] = data_out[k] + m_pNum[i] * m_pW[i];
        }
 
        for(i = m_N - 1; i >= 1; i--)
        {
            m_pW[i] = m_pW[i-1];
        }
    }
}

void resp_test(void)
{
    double b[5] = {0.001836, 0.007344, 0.011016, 0.007344, 0.001836};
    double a[5] = {1.0, -3.0544, 3.8291, -2.2925, 0.55075};
    double x[2] = {1.0, 1.0};
    double y[100];
 
    IIR_II filter;
    filter.setPara(b, 4, a, 4);
    filter.resp(x, 2, y, 100);
 
    for(int i= 0; i< 100; i++)
    {
        cout << y[i] << endl;
    }
}

void filter_test(void)
{
	double b[10+ 1] = {0.148272051952562,
		-0.00902847801835601,	-0.0878228711508290,
		-0.191098706810933,	-0.278135688638142,	
		0.688166514324882,	-0.278135688638142,	
		-0.191098706810933,	-0.0878228711508290,	
		-0.00902847801835601,	0.148272051952562};
    double a[10 + 1] = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,0.0,0.0};
    IIR_I filter;
    filter.setPara(b, 10, a, 10);
 
    double x[100] = {
        0,
0.917905,
1.808715,
2.646136,
3.405449,
4.06424,
4.603063,
5.006014,
5.261197,
5.361081,
5.302718,
5.087829,
4.722758,
4.218282,
3.589291,
2.854351,
2.035157,
1.15589,
0.242503,
-0.678042,
-1.578573,
-2.432508,
-3.21464,
-3.901882,
-4.47395,
-4.913956,
-5.208912,
-5.350112,
-5.333388,
-5.159234,
-4.83279,
-4.363693,
-3.765788,
-3.056725,
-2.257434,
-1.391509,
-0.484509,
0.436792,
1.345201,
2.213902,
3.017253,
3.731541,
4.335682,
4.811843,
5.145968,
5.328196,
5.353146,
5.220083,
4.932934,
4.500175,
3.93458,
3.252845,
2.475093,
1.624281,
0.725524,
-0.194649,
-1.109076,
-1.990766,
-2.813692,
-3.553565,
-4.188543,
-4.699885,
-5.072496,
-5.295378,
-5.361951,
-5.270251,
-5.022984,
-4.627449,
-4.095322,
-3.442309,
-2.687687,
-1.85373,
-0.965055,
-0.047893,
0.870682,
1.763557,
2.604375,
3.368317,
4.032834,
4.57831,
4.988644,
5.251724,
5.359784,
5.309635,
5.102756,
4.745255,
4.247684,
3.62473,
2.894782,
2.079386,
1.202611,
0.290337,
-0.630507,
-1.532739,
-2.389728,
-3.176178,
-3.868874,
-4.447368,
-4.894586,
-5.197326
    };
    double y[100] = {0};
    int len = 100;

    filter.filter(x, y, 100);
    filter.reset();
    filter.setPara(b, 10, a, 10);
    filter.filter(x, y, 100);

    for (int i = 0; i < len; i++)
    {
        cout << x[i] <<", " << y[i]<<  endl;
    }
}
