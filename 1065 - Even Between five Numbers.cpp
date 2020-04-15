#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n=5, c=0;
    int i, sum=0;
    while(n--)
    {
        cin >> i;
        if(i%2==0)
        {
            c++;
        }
    }
    cout << c << " valores pares" << endl;
}
