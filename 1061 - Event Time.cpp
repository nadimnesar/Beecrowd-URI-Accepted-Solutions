#include <iostream>
using namespace std;
int main()
{
    string ex;
    int d1, d2, D;
    int h1, m1, s1, H, M;
    int h2, m2, s2, S;
    int T1, T2, T;
    cin >> ex >> d1;
    cin >> h1 >> ex >> m1 >> ex >> s1;
    cin >> ex >> d2;
    cin >> h2 >> ex >> m2 >> ex >> s2;
    T1=((d1*86400)+(h1*3600)+(m1*60)+s1);
    T2=((d2*86400)+(h2*3600)+(m2*60)+s2);
    T=T2-T1;
    D=T/86400;
    T=T%86400;
    H=T/3600;
    T=T%3600;
    M=T/60;
    S=T%60;
    cout << D << " dia(s)" << endl;
    cout << H << " hora(s)" << endl;
    cout << M << " minuto(s)" << endl;
    cout << S << " segundo(s)" << endl;;
}
