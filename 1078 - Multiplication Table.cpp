#include <iostream>
using namespace std;
int main()
{
    int i, N;
    cin >> N;
    if (2<N<1000)
    {
        for (i=1; i<=10; i++)
        {
            cout << i << " x " << N << " = " << (i*N) << endl;
        }
    }
}
