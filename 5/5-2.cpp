#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Podaj liczbe N:";
	cin >> a;

	cout << "Kwadraty liczb od 1 do " << a << ":\n";
	for(int i=1;i<=a;i++){
		cout << i << "^2 = " << i*i << endl;
	}
}