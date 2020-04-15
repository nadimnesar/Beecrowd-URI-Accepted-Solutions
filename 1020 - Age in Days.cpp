#include <iostream>
using namespace std;
int main()
{
    int x, y, m, d, r;
	cin >> x;
	y=x/365;
	r=x%365;
	m=r/30;
	d=r%30;
	cout << y << " ano(s)" << endl << m << " mes(es)" << endl << d << " dia(s)" << endl;
	return 0;
}
