#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Podaj liczbe N:";
	cin >> a;
	
	int b=0;
	for(int i=1;i<=a;i++){
		b = b + i;
		cout << b;
	}
	cout << "\nSuma liczb od 1 do " << a << " wynosi: " << b;
}