#include <iostream>
using namespace std;


struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};


int main(){
	
	Osoba a = {"jan","kowalski",20};
	cout << "Dane przed zmiana:\nimie: " << a.imie << "\nnazwisko: " << a.nazwisko << "\nwiek: " << a.wiek;
	a.wiek += 12;
	cout << "\n\nDane po zmianie:\nimie: " << a.imie << "\nnazwisko: " << a.nazwisko << "\nwiek: " << a.wiek;
}
