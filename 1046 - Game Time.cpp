#include <iostream>
using namespace std;
int main()
{
    int s, e, t;
    cin >> s >> e;
    t=e-s;
    if(t==0)
        t=24;
    else if(t<0)
        t=t+24;
    cout << "O JOGO DUROU " << t << " HORA(S)" << endl;
}
