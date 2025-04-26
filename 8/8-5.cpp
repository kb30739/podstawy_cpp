#include <iostream>
#include <ctime>
using namespace std;

int duzamala(int liczba, int wylosowanaliczba){
	if(liczba > wylosowanaliczba){
		cout << "za duza\n";
	} else {
		cout << "za mala\n";
	}
	return 0;
}

int checkliczba(int liczba, int wylosowanaliczba){
	if(liczba == wylosowanaliczba){
		cout << "dobrze";
		return 0;
	} else {
		duzamala(liczba, wylosowanaliczba);
		return 1;
	}
}

int main() {
	srand(time(NULL));
	int res = rand() % 100 + 1;
	//cout << "Res = " << res << endl;
	int r = 1;
	do{
		int l;
		cout << "Podaj liczbe: ";
		cin >> l;
		r = checkliczba(l, res);
	} while(r);
}
