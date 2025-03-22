#include <iostream>
using namespace std;

void add(int a, int b){
	cout << a << " + " << b << " = " << a+b << endl;
}
void sub(int a, int b){
	cout << a << " - " << b << " = " << a-b << endl;
}
void mult(int a, int b){
	cout << a << " * " << b << " = " << a*b << endl;
}
void dvd(int a, int b){
	cout << a << " / " << b << " = " << a/b << endl;
}

int main() {
	int a, b, c;
	do{
		cout << "Wybierz funkcje: \n1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4.Dzielenie\n0.Exit\n";
		cin >> a;
		if(a == 0)
			break;
		if(a>4)
			continue;
		cout << "Wprowadz 1 liczbe: ";
		cin >> b;
		cout << "Wprowadz 2 liczbe: ";
		cin >> c;
		switch(a){
			case 1:
				add(b,c);
			break;
			case 2:
				sub(b,c);
			break;
			case 3:
				mult(b,c);
			break;
			case 4:
				dvd(b,c);
			break;
		}
	} while (a != '0');
}
