#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (((b*b)-(4*a*c)) > 0 && (2*a)!=0)
    {
        cout << "R1 = " << fixed << setprecision(5) << (((-b)+sqrt(((b*b)-(4*a*c))))/(2*a)) << endl;
        cout << "R2 = " << fixed << setprecision(5) << (((-b)-sqrt(((b*b)-(4*a*c))))/(2*a)) << endl;
    }
    else
        cout << "Impossivel calcular" << endl;
}
