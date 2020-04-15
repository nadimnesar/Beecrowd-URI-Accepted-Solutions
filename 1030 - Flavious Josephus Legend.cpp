#include <iostream>
using namespace std;
int luckey(int a, int b)
{
    if(a==1) return 1;
    return (luckey(a-1, b)+b-1)%a+1;
}
int main()
{
    int n, i=0;
    cin >> n;
	while(n--)
    {
        int x, y;
        cin >> x >> y;
        cout << "Case " << ++i << ": " << luckey(x, y) << endl;
    }
}
