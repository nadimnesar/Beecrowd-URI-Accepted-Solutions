#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   while(1)
    {
        int n, c=0;
        cin >> n;
        if(n==0)
        {
            break;
        }
        int i, m[n];
        for(i=0; i<n; i++)
        {
            cin >> m[i];
        }
        for(i=1; i<n-1; i++)
        {

            if(m[i] > m[i-1] && m[i] > m[i+1] || m[i]< m[i-1] && m[i] < m[i+1])
            {
                c++;
            }
        }
        if(m[0] > m[n-1] && m[0] > m[1] || m[0]< m[n-1] && m[0] < m[1])
        {
            c++;
        }
        if(m[n-1] > m[n-2] && m[n-1] > m[0] || m[n-1]< m[n-2] && m[n-1] < m[0])
        {
            c++;
        }
        cout << c << endl;
    }
}
