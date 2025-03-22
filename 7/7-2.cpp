#include <iostream>
using namespace std;

int main() {
	char a[21];
	cout << "Podaj ciag znakow (max 20):";
	cin.getline(a, 21);
	for(int i=0;i<21;i++){
		if(a[i] == 'a')
			a[i] = 'o';
	}
	cout << "Zmieniony ciag znakow: " << a;
}