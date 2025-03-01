#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	cout << "Suma: " << a + b << endl;
	cout << "Roznica: " << a - b << endl;
	cout << "Iloczyn: " << a * b << endl;
	cout << "Iloraz: " << a / b << endl;
	cout << "Reszta z dzielenia: " << a % b << endl;
	return 0;
}