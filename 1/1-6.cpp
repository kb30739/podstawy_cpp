#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	cout << "Suma: " << a + b << endl;
	if((a + b) % 2 == 0)
		cout << "Suma jest liczba parzysta.";
	else
		cout << "Suma jest liczba nieparzysta.";
	return 0;
}