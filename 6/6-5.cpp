#include <iostream>
using namespace std;

int main() {
	int a[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "Podaj liczbe dla wiersza " << i+1 << ", kolumny " << j+1 << ": ";
			cin >> a[i][j];
		}
	}
	
	int sum = 0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sum += a[i][j];
		}
	}
	cout << "Srednia liczb: " << sum/9;
}