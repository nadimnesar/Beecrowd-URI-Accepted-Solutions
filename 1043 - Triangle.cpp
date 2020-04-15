#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if(a + b > c && a + c > b && b + c > a)
        cout << "Perimetro = " << fixed << setprecision(1) << (a+b+c) << endl;
    else
        cout << "Area = " << fixed << setprecision(1) << ((1/2.0)*(a+b)*c) << endl;
}
