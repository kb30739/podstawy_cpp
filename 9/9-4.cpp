#include <iostream>
using namespace std;

int calcVolume(int a){
	return a*a*a;
}

int calcVolume(int a, int b, int h){
	return a*b*h;
}

float calcVolume(int r, int h){
	return 3.1415 * r * r * h;
}

int main(){
	cout << "Wybierz bryle do obliczenia objetosci:" << endl;
	cout << "1 - szescian(V = a^3)" << endl;
	cout << "2 - prostopadloscian(V = a*b*h)" << endl;
	cout << "3 - walec(V = pi * r^2 * h)" << endl;
	int wyb;
	cout << "Podaj numer bryly: ";
	cin >> wyb;
	
	switch(wyb){
		case 1:
			int a;
			cout << "Podaj dlugosc a: ";
			cin >> a;
			cout << "Objetosc wynosi: " << calcVolume(a);
		break;
		case 2:
			int a2,b2,h2;
			cout << "Podaj dlugosc a: ";
			cin >> a2;
			cout << "Podaj szerokosc b: ";
			cin >> b2;
			cout << "Podaj wysokosc h: ";
			cin >> h2;
			cout << "Objetosc wynosi: " << calcVolume(a2,b2,h2);
		break;
		case 3:
			int r3,h3;
			cout << "Podaj promien r: ";
			cin >> r3;
			cout << "Podaj wysokosc h: ";
			cin >> h3;
			cout << "Objetosc wynosi: " << calcVolume(r3, h3);
		break;
	}
}