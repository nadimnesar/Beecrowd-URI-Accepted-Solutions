#include <iostream>
using namespace std;
int main()
{
    int n, i, c=0;
    for(i=0; i<6; i++)
    {
        cin >> n;
        if(n%2==0)
            c++;
    }
    cout << c << " valores positivos" << endl;
}
