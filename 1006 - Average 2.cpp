#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c, avg;
	cin >> a;
	cin >> b;
	cin >> c;
	avg=((a*2)+(b*3)+(c*5))/(2+3+5);
	cout << "MEDIA = " << fixed << setprecision(1) << avg << endl;
}
