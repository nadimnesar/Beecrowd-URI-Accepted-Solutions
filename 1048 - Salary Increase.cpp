#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double s, p, n, ns;
    cin >> s;
    if(s>=0 && s<=400.00)
    {
        p=15;
        ns=s+(s*(p/100));
        n=ns-s;
    }
    else if(s>=400.01 && s<=800.00)
    {
        p=12;
        ns=s+(s*(p/100));
        n=ns-s;
    }
    else if(s>=800.01 && s<=1200.00)
    {
        p=10;
        ns=s+(s*(p/100));
        n=ns-s;
    }
    else if(s>=1200.01 && s<=2000.00)
    {
        p=7;
        ns=s+(s*(p/100));
        n=ns-s;
    }
    else if(s>=2000.01)
    {
        p=4;
        ns=s+(s*(p/100));
        n=ns-s;
    }
    cout << "Novo salario: " << fixed << setprecision(2) << ns << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << n << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << p << " %" << endl;
}
