#include <iostream>
using namespace std;
int main()
{
    double y;
    int x;
	cin >> y;
	x=(double)y*100;
	cout << "NOTAS:" << endl;
	cout << x/10000 << " nota(s) de R$ 100.00" << endl;
	x=x%10000;
	cout << x/5000 << " nota(s) de R$ 50.00" << endl;
	x=x%5000;
	cout << x/2000 << " nota(s) de R$ 20.00" << endl;
	x=x%2000;
	cout << x/1000 << " nota(s) de R$ 10.00" << endl;
	x=x%1000;
	cout << x/500 << " nota(s) de R$ 5.00" << endl;
	x=x%500;
	cout << x/200 << " nota(s) de R$ 2.00" << endl;
	x=x%200;
	cout << "MOEDAS:" << endl;
	cout << x/100 << " moeda(s) de R$ 1.00" << endl;
	x=x%100;
	cout << x/50 << " moeda(s) de R$ 0.50" << endl;
	x=x%50;
	cout << x/25 << " moeda(s) de R$ 0.25" << endl;
	x=x%25;
	cout << x/10 << " moeda(s) de R$ 0.10" << endl;
	x=x%10;
	cout << x/5 << " moeda(s) de R$ 0.05" << endl;
	x=x%5;
	cout << x/1 << " moeda(s) de R$ 0.01" << endl;
	return 0;
}
