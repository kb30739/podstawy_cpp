#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Podaj liczbe N: ";
	cin >> n;
	int a, i = 0;
	
	while(i <= n){
		a += i;
		i++;
	}
	cout << "Suma liczb naturalnych do " << n << ": " << a;
	return 0;
}