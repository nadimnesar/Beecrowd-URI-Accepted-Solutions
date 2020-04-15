#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int code1, code2, unit1, unit2;
	double price1, price2;
	cin >> code1 >> unit1 >> price1;
	cin >> code2 >> unit2 >> price2;
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (unit1*price1)+(unit2*price2) << endl;
	return 0;
}
