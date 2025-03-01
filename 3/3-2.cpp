#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Podaj temperature (w C):";
	cin >> a;
	char b;
	cout << "Wybierz jednostke docelowa (K - kelvin; F - fahrenheit): ";
	cin >> b;
	
	switch(b){
		case 'K':
			cout << "Temperatura w stopniach kelvina: " << a + 273.15;
		break;
		case 'F':
			cout << "Temperatura w stopniach fahrenheita: " << (a * 9/5) + 32;
		break;
		default:
			cout << "Bledna jednostka";
		break;
	}
	return 0;
}