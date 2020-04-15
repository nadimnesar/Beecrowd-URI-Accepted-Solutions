#include <iostream>
using namespace std;
int main()
{
    int j, i, a[3], b[3], temp;
    for(i=0; i<3; i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<3; i++)
    {
        cout << a[i] << endl;
    }
    cout << endl;
    for(i=0; i<3; i++)
    {
        cout << b[i] << endl;
    }
}
