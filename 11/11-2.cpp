#include <iostream>
using namespace std;


struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};


int main(){
	
	Osoba osoba[3] = {
	{"jan","kowalski",45},
	{"marek","nowak",11},
	{"adam","bukowski",20}};
	
	cout << "imie: " << osoba[0].imie << "\nnazwisko: " << osoba[0].nazwisko << "\nwiek: " << osoba[0].wiek;
	cout << "\n\nimie: " << osoba[1].imie << "\nnazwisko: " << osoba[1].nazwisko << "\nwiek: " << osoba[1].wiek;
	cout << "\n\nimie: " << osoba[2].imie << "\nnazwisko: " << osoba[2].nazwisko << "\nwiek: " << osoba[2].wiek;
}
