#include <iostream>
using namespace std;
int main()
{
    int x, n1, n2, n3, n4, n5, n6, n7, r;
	cin >> x;
	n1=x/100;
	r=x%100;
	n2=r/50;
	r=r%50;
	n3=r/20;
	r=r%20;
	n4=r/10;
	r=r%10;
	n5=r/5;
	r=r%5;
	n6=r/2;
	r=r%2;
	n7=r/1;
	cout << x << endl;
	cout << n1 << " nota(s) de R$ 100,00" << endl;
	cout << n2 << " nota(s) de R$ 50,00" << endl;
	cout << n3 << " nota(s) de R$ 20,00" << endl;
	cout << n4 << " nota(s) de R$ 10,00" << endl;
	cout << n5 << " nota(s) de R$ 5,00" << endl;
	cout << n6 << " nota(s) de R$ 2,00" << endl;
	cout << n7 << " nota(s) de R$ 1,00" << endl;
	return 0;
}
