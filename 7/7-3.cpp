#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	char b;
	cout << "Podaj ciag znakow:";
	cin >> a;
	cout << "Podaj znak do zliczenia:";
	cin >> b;
	int sum;
	string pos;
	for(int i=0;i<a.length();i++){
		if(a[i] == b){
			sum += 1;
			pos.append(to_string(i) + ", ");
		}
	}
	cout << "Liczba powtorzen: " << sum << endl;
	cout << "Miejsca wystapien: " << pos;
}