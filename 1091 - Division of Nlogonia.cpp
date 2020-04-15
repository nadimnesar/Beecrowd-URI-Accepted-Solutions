#include <iostream>
using namespace std;
int main()
{
    int n, i;
    while(1)
    {
        int n;
        cin >> n;
        if(n==0)
        {
            break;
        }
        int dx, dy;
        cin >> dx >> dy;
        int x, y;
        for (i=0; i<n; i++)
        {
            cin >> x >> y;
            int t1, t2;
            t1=x-dx;
            t2=y-dy;
            if(t1 > 0 && t2 > 0)
                cout << "NE" << endl;
            else if(t1 < 0 && t2 > 0)
                cout << "NO" << endl;
            else if(t1 < 0 && t2 < 0)
                cout << "SO" << endl;
            else if(t1 > 0 && t2 < 0)
                cout << "SE" << endl;
            else if(t1==0 || t2==0)
                cout << "divisa" << endl;

        }
    }
}
