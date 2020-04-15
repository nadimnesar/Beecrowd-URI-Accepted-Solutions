#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N, i;
    cin >> N;
    for (i=1; i<=N; i++)
    {
        float a, b, c;
        cin >> a >> b >> c;
        cout << fixed << setprecision(1) << (float)(((a*2)+(b*3)+(c*5))/(2+3+5)) << endl;
    }
}
