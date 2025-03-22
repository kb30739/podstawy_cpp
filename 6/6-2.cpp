#include <iostream>
using namespace std;

int main() {
	int a[5];
	cout << "Podaj 5 liczb calkowitych: ";
	for(int i=0;i<5;i++){
		cin >> a[i];
	}
	cout << "Liczby ujemne zamienione na 0: ";
	for(int i=0;i<5;i++){
		if(a[i] < 0)
			a[i] = 0;
		cout << a[i] << ", ";
	}
}