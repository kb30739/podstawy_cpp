#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	cout << "Podaj ciag znakow:";
	cin >> a;
	char b[a.length()];
	for(int i=0;i<a.length();i++){
		cout << i << a[i];
		b[a.length() - i-1] = a[i];
	}
	cout << "\nb: " << b;
}