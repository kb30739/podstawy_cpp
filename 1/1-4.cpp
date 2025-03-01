#include <iostream>
using namespace std;

int main() {
	string imie, wiek;
	cout << "Podaj swoje imie: ";
	cin >> imie;
	cout << "Podaj swoj wiek: ";
	cin >> wiek;
	cout << "Witaj, " << imie << "! Masz " << wiek << " lat.";
	return 0;
}