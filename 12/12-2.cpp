#include <iostream>
#include <fstream>
using namespace std;

void fcreate(){
	cout << "Podaj nazwe dla nowego pliku: ";
	string abc;
	cin >> abc;
	ofstream plik(abc.c_str());
	cout << "Plik " << abc << " zostal utworzony.";
}
void fdelete(){
	cout << "Podaj nazwe pliku do usuniecia: ";
	string abc;
	cin >> abc;
	remove(abc.c_str());
	cout << "Plik " << abc << " zostal usuniety.";
}
void frename(){
	cout << "Podaj nazwe pliku do zmiany: ";
	string abc;
	cin >> abc;
	cout << "Podaj nowa nazwe pliku: ";
	string def;
	cin >> def;
	rename(abc.c_str(), def.c_str());
	cout << "Zmieniono nazwe pliku.";
}

int main(){
	cout << "Wybierz operacje:\n\t1-Utworz pusty plik.\n\t2-Usun plik.\n\t3-Zmien nazwe pliku.\n";
	int a;
	cin >> a;
	switch(a){
		case 1:
			fcreate();
		break;
		case 2:
			fdelete();
		break;
		case 3:
			frename();
		break;
	}
}
