#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, n=5, e=0, o=0, p=0, ne=0;
    while(n--)
    {
        cin >> i;
        if(i%2==0)
        {
            e++;
        }
        if(i%2!=0)
        {
            o++;
        }
        if(i>0)
        {
            p++;
        }
        if(i<0)
        {
            ne++;
        }
    }
    cout << e << " valor(es) par(es)" << endl;
    cout << o << " valor(es) impar(es)" << endl;
    cout << p << " valor(es) positivo(s)" << endl;
    cout << ne << " valor(es) negativo(s)" << endl;
}
