#include<iostream>  
#include<math.h>
using namespace std;

long double dvfact(long double x)
{
    long double fact;
    if (x > 2)
    {
        fact = x * dvfact(x - 2);
    }
    else if (x > 0)
    {
        fact = x;
    }
    else if (x == 0)
    {
        fact = 1;
    }
    return fact;
}

long double givet(long double x)
{
    long double t, chisl, vschisl, vsznam, znam, k, drob;
    t = 0;
    chisl = 0;
    znam = 0;
    for (k = 0; k <= 10; k++)
    {
        vschisl = pow(x, 2 * k + 1);
        vsznam = dvfact(2 * k + 1);
        drob = vschisl / vsznam;
        chisl += drob;
        vschisl = pow(x, 2 * k);
        vsznam = dvfact(2 * k);
        drob = vschisl / vsznam;
        znam += drob;
    }
    t = chisl / znam;
    return t;
}

int main()
{
    long double y, chisl, znam, drob;
    cin >> y;
    chisl = (7 * givet(0.25)) + (2 * givet(1 + y));
    znam = 6 - givet(y * y - 1);
    drob = chisl / znam;
    cout << drob << endl;
    return 0;
}
