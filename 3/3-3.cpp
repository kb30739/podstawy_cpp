#include <iostream>
using namespace std;

int main() {
	int h;
	cout << "Podaj liczbe godzin parkowania: ";
	cin >> h;
	char typ;
	cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
	cin >> typ;
	
	switch(typ){
		case 'S':
			cout << "Oplata za parkowanie: " << 5*h << " zl";
		break;
		case 'M':
			cout << "Oplata za parkowanie: " << 3*h << " zl";
		break;
		case 'A':
			cout << "Oplata za parkowanie: " << 10*h << " zl";
		break;
		default:
			cout << "Bledny rodzaj pojazdu";
		break;
	}
	return 0;
}