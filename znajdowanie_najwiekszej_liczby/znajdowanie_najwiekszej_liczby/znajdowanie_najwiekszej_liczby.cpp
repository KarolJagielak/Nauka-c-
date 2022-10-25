#include <iostream>

using namespace std;

int a, b, c,d,m;

int main()
{
	cout << "Podaj 4 liczby rozdzielone spacja: ";
	cin >> a >> b >> c >> d;

	m = a;
	if (b > m) m = b;
	if (c > m) m = c;
	if (d > m) m = d;
	cout << "Najwieksza liczba to " << m;


	/*if ((a >= b) && (a >= c))
		cout << "Najwieksza liczba to " << a;
	else if ((b >= a) && (b >= c))
		cout << "Najwieksza liczba to " << b;
	else if ((c >= a) && (c >= b))
		cout << "Najwieksza liczba to " << c;*/

	return 0;
}