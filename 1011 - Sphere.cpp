#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long long unsigned int r;
	cin >> r;
	cout << "VOLUME = " << fixed << setprecision(3) << (4.0/3.0)*3.14159*(r*r*r) << endl;
	return 0;
}
