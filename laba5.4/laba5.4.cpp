#include <iostream>
#include <cmath>
using namespace std;
double P0(const int i)
{
    double p = 1;
    for (int i = 1; i <= 15; i++)
        p *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i;
    return p;
}
double P1(const int i)
{
    if (i > 15)
        return 1;
    else
        return ((sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i) * P1(i + 1);
}
double P2(const int i)
{
    if (i < 1)
        return 1;
    else
        return ((sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i) * P2(i - 1);
}
double P3(const int i, double t)
{
    t *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i;
    if (i >= 15)
        return t;
    else
        return P3(i + 1, t);
}
double P4(const int i, double t)
{
    t *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i;
    if (i <= 1)
        return t;
    else
        return P4(i - 1, t);
}

int main()
{
    int i = 1;

    cout << "(iter) P0 = " << P0(i) << endl;
    cout << "(rec up ++) P1 = " << P1(i) << endl;
    cout << "(rec up --) P2 = " << P2(i) << endl;
    cout << "(rec down ++) P3 = " << P3(i, 1) << endl;
    cout << "(rec down --) P4 = " << P4(i, 1) << endl;
    return 0;
}