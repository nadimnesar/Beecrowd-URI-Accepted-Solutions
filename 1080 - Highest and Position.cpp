#include <iostream>
using namespace std;
int main()
{
    int n, H=-1, x, i;
    for (i=1; i<=100; i++)
    {
        cin >> n;
        if (H<n)
        {
            H=n;
            x=i;
        }
    }
    cout << H << endl;
    cout << x << endl;
}
