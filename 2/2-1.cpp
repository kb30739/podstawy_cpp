#include <iostream>
using namespace std;

int main() {
	int wynik;
	cout << "Podaj wynik egzaminu (liczba punktow): ";
	cin >> wynik;
	
	if(wynik < 50)
		cout << "Ocena niedostateczna";
	else if(wynik < 70)
		cout << "Ocena dostateczna";
	else if(wynik < 85)
		cout << "Ocena dobra";
	else if(wynik < 100)
		cout << "Ocena bardzo dobra";
	else
		cout << "Ocena celujaca";
	return 0;
}