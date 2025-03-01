#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Podaj liczbe calkowita: ";
	cin >> a;
	
	if(a % 2)
		cout << "Liczba " << a << " jest nieparzysta.\n";  
	else
		cout << "Liczba " << a << " jest parzysta.\n";
		
	if(a % 3)
		cout << "Liczba " << a << " jest niepodzielna przez 3.\n";  
	else
		cout << "Liczba " << a << " jest podzielna przez 3.\n";
	return 0;
}