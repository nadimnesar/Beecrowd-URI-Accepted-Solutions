#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x, y;
	cin >> x >> y;
	cout << fixed << setprecision(3) << (double)(y/12.00)*x << endl;
	return 0;
}
