#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char c[100];
	double a, b;
	cin >> c >> a >> b;
	cout << "TOTAL = R$ " << fixed << setprecision(2) << a+((b*15)/100) << endl;
	return 0;
}
