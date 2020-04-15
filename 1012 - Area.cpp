#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, c;
	cin >> a >> b >> c;
	cout << "TRIANGULO: " << fixed << setprecision(3) << (1.0/2)*a*c << endl;
	cout << "CIRCULO: " << fixed << setprecision(3) << 3.14159*c*c << endl;
	cout << "TRAPEZIO: " << fixed << setprecision(3) << (1.0/2)*(a+b)*c << endl;
	cout << "QUADRADO: " << fixed << setprecision(3) << b*b << endl;
	cout << "RETANGULO: " << fixed << setprecision(3) << a*b << endl;
	return 0;
}
