#include <iostream>
using namespace std;
int main()
{
    int x, h, m, s, r;
	cin >> x;
	h=x/3600;
	r=x%3600;
	m=r/60;
	s=r%60;
	cout << h << ":" << m << ":" << s <<endl;
	return 0;
}
