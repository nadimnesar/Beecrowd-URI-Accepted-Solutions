#include <iostream>
using namespace std;
int main()
{
    int i, N;
    cin >> N;
    for (i=1; i<=10000; i++)
    {
        if (i%N==2)
            cout << i << endl;
    }
}
