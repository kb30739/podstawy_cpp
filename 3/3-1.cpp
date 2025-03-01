#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	char c;
	cout << "Podaj znak dzialania (+,-,*,/): ";
	cin >> c;
	
	switch(c){
		case '+':
			cout << "Wynik: " << a + b;
		break;
		case '-':
			cout << "Wynik: " << a - b;
		break;
		case '*':
			cout << "Wynik: " << a * b;
		break;
		case '/':
			cout << "Wynik: " << a / b;
		break;
		default:
			cout << "Bledny znak";
		break;
	}
	
	return 0;
}