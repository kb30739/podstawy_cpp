#include <iostream>
using namespace std;

int main() {
	char a[21];
	cout << "Podaj ciag znakow (max 20):";
	cin.getline(a, 21);
	cout << "Wprowadzony ciag znakow: " << a;
}