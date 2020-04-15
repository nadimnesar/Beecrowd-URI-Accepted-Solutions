#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n=6;
    int c=0;
    double i, sum=0;
    while(n--)
    {
        cin >> i;
        if(i>0)
        {
            c++;
            sum+=i;
        }
    }
    cout << c << " valores positivos" << endl;
    cout << fixed << setprecision(1) << ((double)sum/c) << endl;
}
