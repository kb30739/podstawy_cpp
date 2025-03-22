#include <iostream>
using namespace std;

int main() {
	int a[2][3];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout << "Podaj liczbe dla wiersza " << i+1 << ", kolumny " << j+1 << ": ";
			cin >> a[i][j];
		}
	}
	
	int b[3][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			b[j][i] = a[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}