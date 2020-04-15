#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    long long int i, n;
    cin >> n;
    if(n%2!=0)
        n--;
    for(i=2; i<=n; i=i+2)
    {
        cout << i << "^2 = " << fixed << setprecision(0) << (pow(i, 2)) << endl;
    }
}
