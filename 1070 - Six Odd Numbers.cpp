#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, c=6;
    cin >> n;
    if(n%2==0)
    {
        n++;
    }
    while(c--)
    {
        cout << n << endl;
        n=n+2;
    }
}
