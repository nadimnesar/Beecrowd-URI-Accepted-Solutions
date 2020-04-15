#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n1, n2, n, i, sum=0;
    cin >> n1 >> n2;
    if (n2%2==0)
        n=n2+1;
    else
        n=n2+2;
    for (i=n; i<n1; i=i+2)
        sum=sum+i;
    cout << sum << endl;
}
