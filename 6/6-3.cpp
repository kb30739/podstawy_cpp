#include <iostream>
using namespace std;

int main() {
	int a[10];
	for(int i=0;i<10;i++){
		cout << "Podaj liczbe nr " << i+1 << ":";
		cin >> a[i];
	}
	int sm = a[0];
	for(int i=0;i<10;i++){
		if(a[i] < sm)
			sm = a[i];
	}
	cout << "Najmniejsza liczba to: " << sm;
}