#include <iostream>
using namespace std;


struct Samochod {
    string marka;
    string model;
    int rok_produkcji;
};

void WyswietlDane(Samochod a){
	cout << "marka: " << a.marka << "\nmodel: " << a.model << "\nrok produkcji: " << a.rok_produkcji;
}

int main(){
	Samochod audi = {"Audi", "A4", 2004};
	
	WyswietlDane(audi);
}
