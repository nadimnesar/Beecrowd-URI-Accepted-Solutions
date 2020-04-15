#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i, in=0, out=0;
    cin >> n;
    while(n--)
    {
        cin >> i;
        if(i>=10 && i<=20)
            in++;
        else
            out++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
}
