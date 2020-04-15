#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n;
    cin >> n;
    if(n>=0.00 && n<=2000.00)
        cout << "Isento" << endl;
    else if(n>=2000.01 && n<=3000.00)
        cout << "R$ "  << fixed << setprecision(2) << ((n-2000.00)*(8.00/100)) << endl;
    else if(n>=3000.01 && n<=4500.00)
        cout << "R$ " << fixed << setprecision(2) << (((n-3000.00)*(18.00/100))+80.00) << endl;
    else if(n>=4500.01)
        cout << "R$ " << fixed << setprecision(2) << (((n-4500.00)*(28.00/100))+350) << endl;
}
