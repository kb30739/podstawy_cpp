#include <iostream>
using namespace std;

bool even(int a){
	if(a%2==0)
		return true;
	else
		return false;
}

int main() {
	int a;
	cout << "Podaj liczbe calkowita: ";
	cin >> a;
	
	if(even(a))
		cout << "Liczba " << a << " jest parzysta";
	else
		cout << "Liczba " << a << " jest nieparzysta";
	
}
