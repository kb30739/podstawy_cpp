#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Podaj liczbe N: ";
	cin >> n;
	
	int a, i = 1;
	do{
		if(i % 2 == 0)
			a += 1;
		i++;
	}while(i <= n);
	
	cout << "Liczba liczb parzystych od 1 do " << n << " wynosi: " << a;
	return 0;
}