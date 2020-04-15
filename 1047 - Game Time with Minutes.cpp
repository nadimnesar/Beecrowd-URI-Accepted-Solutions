#include <iostream>
using namespace std;
int main()
{
    int sh, sm, eh, em, h, m;
    cin >> sh >> sm >> eh >> em;
    h=eh-sh;
    m=em-sm;
    if(sh==eh && sm==em)
    {
        h=24;
        m=0;
    }
    else if(sh==eh && sm>em)
    {
        h=24;
        if(m<0)
        {
            m=m+60;
            h--;
        }
    }
    else if(h<0)
    {
        h=h+24;
        if(m<0)
        {
            m=m+60;
            if(sh>eh)
            {
                h--;
            }
        }
    }
    else if(m<0)
    {
        m=m+60;
        if(eh>sh)
        {
            h--;
        }
    }
    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;
}
