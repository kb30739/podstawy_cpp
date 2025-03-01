#include <iostream>
using namespace std;

int main() {
	char cont;
	do {
		int a;
	    cout << "Podaj liczbe: ";
	    cin >> a;
	    cout << "Wprowadziles liczbe: " << a << endl;
	    cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n):";
	    cin >> cont;
	} while (cont != 'n');
	cout << "Dziekuje za wprowadzenie liczb!";
	return 0;
}