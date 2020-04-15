#include <iostream>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    int a[n], i;
    for (i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for (i=0; i<n; i++)
    {
        if ((a[i]%2!=0)&&(a[i]<0))
            cout << "ODD NEGATIVE" << endl;
        else if ((a[i]%2!=0)&&(a[i]>0))
            cout << "ODD POSITIVE" << endl;
        else if(a[i]==0)
            cout << "NULL" << endl;
        else if((a[i]%2==0)&&(a[i]>0))
            cout << "EVEN POSITIVE" << endl;
        else if((a[i]%2==0)&&(a[i]<0))
            cout << "EVEN NEGATIVE" << endl;
    }
}
