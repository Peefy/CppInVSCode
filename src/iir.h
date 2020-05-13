
#ifndef __IIR_H
#define __IIR_H

#include <complex>
#include <iostream>
#include <math.h>

using namespace std;

class IIR_I
{
private:
    double *m_pNum;
    double *m_pDen;
    double *m_px;
    double *m_py;
    int m_num_order;
    int m_den_order;
public:
    IIR_I();
    void reset();
    void setPara(double num[], int num_order, double den[], int den_order);
    void resp(double data_in[], int m, double data_out[], int n);
    double filter(double data);
    void filter(double data[], int len);
    void filter(double data_in[], double data_out[], int len);
};


/**< IIR 滤波器直接II型实现 */
class IIR_II
{
public:
    IIR_II();
    void reset();
    void setPara(double num[], int num_order, double den[], int den_order);
    void resp(double data_in[], int m, double data_out[], int n);
    double filter(double data);
    void filter(double data[], int len);
    void filter(double data_in[], double data_out[], int len);
protected:
    private:
    double *m_pNum;
    double *m_pDen;
    double *m_pW;
    int m_num_order;
    int m_den_order;
    int m_N;
};
 
class IIR_BODE
{
private:
    double *m_pNum;
    double *m_pDen;
    int m_num_order;
    int m_den_order;
    complex<double> poly_val(double p[], int order, double omega);
public:
    IIR_BODE();
    void setPara(double num[], int num_order, double den[], int den_order);
    complex<double> bode(double omega);
    void bode(double omega[], int n, complex<double> resp[]);
};

void resp_test(void);
void filter_test(void); /* filter demo */

#endif
