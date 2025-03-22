#include <iostream>
using namespace std;

int main() {
	int row, col;
	cout << "Podaj liczbe wierszy:";
	cin >> row;
	cout << "Podaj liczbe kolumn:";
	cin >> col;
	
	int a = 1;
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			cout << a << "\t";
			a += 2;
		}
		cout << endl;
	}
}