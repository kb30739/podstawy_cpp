#include <iostream>
#include <string>
using namespace std;

int getArrayFromUser(int arr[]){
	cout << "Podaj liczbe nr 1: ";
	cin >> arr[0];
	cout << "Podaj liczbe nr 2: ";
	cin >> arr[1];
	cout << "Podaj liczbe nr 3: ";
	cin >> arr[2];
	cout << "Podaj liczbe nr 4: ";
	cin >> arr[3];
	cout << "Podaj liczbe nr 5: ";
	cin >> arr[4];
}

int findMaxValue(int arr[]){
	int max = arr[0];
	for(int i=1; i<5; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int displayResult(int max){
	cout << "Najwieksza wartosc wynosi: " << max;
}

int main() {
	int arr[5];
	getArrayFromUser(arr);
	int max = findMaxValue(arr);
	displayResult(max);
}
