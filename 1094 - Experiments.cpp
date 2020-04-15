#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int a,i;
    double k,r,f;
    int sum=0,k1=0,r1=0,f1=0, b;
    string c;
    cin >> a;
    for(i=1; i<=a; i++)
    {
        cin >> b >> c;
        sum+=b;
        if(c=="C")
            k1+=b;
        if(c=="R")
            r1+=b;
        if(c=="S")
            f1+=b;
    }
    cout << "Total: " << sum << " cobaias" << endl;
    cout << "Total de coelhos: " << k1 << endl;
    cout << "Total de ratos: " << r1 << endl;
    cout << "Total de sapos: " << f1 << endl;
    k=(k1*100.00)/sum;
    r=(r1*100.00)/sum;
    f=(f1*100.00)/sum;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << k << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << r << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << f << " %" << endl;
}
