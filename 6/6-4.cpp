#include <iostream>
using namespace std;

int main() {
	int a[10];
	for(int i=0;i<10;i++){
		cout << "Podaj liczbe nr " << i+1 << ":";
		cin >> a[i];
	}
	int sum = 0;
	cout << "Liczby parzyste: ";
	for(int i=0;i<10;i++){
		if(a[i] % 2 == 0){
			sum += a[i];
			cout << a[i] << ", ";
		}
	}
	cout << "\nSuma liczb parzystych: " << sum;
}