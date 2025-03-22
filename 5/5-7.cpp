#include <iostream>
using namespace std;

int main() {
	int row, col;
	cout << "Podaj szerokosc:";
	cin >> row;
	cout << "Podaj wysokosc:";
	cin >> col;
	
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			if(i==0 || i == col-1){
				cout << "-";
			} else {
				if(j==0 || j == row-1){
					cout << "|";
				} else {
					if(i%2){
						if(j%2)
							cout << "#";
						else
							cout << "*";
					} else {
						if(j%2 == 0)
							cout << "#";
						else
							cout << "*";
					}
				}
			}
		}
		cout << endl;
	}
}