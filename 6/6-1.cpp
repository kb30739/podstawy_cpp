#include <iostream>
using namespace std;

int main() {
	int a[5];
	for(int i=0;i<5;i++){
		cout << "Podaj liczbe nr " << i+1 << ":";
		cin >> a[i];
	}
	int b = 0;
	for(int i=0;i<5;i++){
		b += a[i];
	}
	cout << b/5;
}