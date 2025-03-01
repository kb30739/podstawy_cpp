#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Podaj liczbe N: ";
	cin >> n;
	int a = 2;
	
	while(a <= n){
		cout << a << endl;
		a += 2;
	}
	return 0;
}