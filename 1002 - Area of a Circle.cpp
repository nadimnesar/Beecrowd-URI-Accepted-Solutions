#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double r, pai=3.14159;
	cin >> r;
	cout << "A=" << fixed << setprecision(4) << pai*r*r << endl;
}
