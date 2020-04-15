#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double code, unit;
    cin >> code >> unit;
    if(code==1)
        cout << "Total: R$ " << fixed << setprecision(2) << (unit*4.00) << endl;
    else if(code==2)
        cout << "Total: R$ " << fixed << setprecision(2) << (unit*4.50) << endl;
    else if(code==3)
        cout << "Total: R$ " << fixed << setprecision(2) << (unit*5.00) << endl;
    else if(code==4)
        cout << "Total: R$ " << fixed << setprecision(2) << (unit*2.00) << endl;
    else
        cout << "Total: R$ " << fixed << setprecision(2) << (unit*1.50) << endl;
}
