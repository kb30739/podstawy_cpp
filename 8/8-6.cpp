#include <iostream>
using namespace std;

int getnumberfromuser(){
	cout << "Podaj liczbe ktorej silnie obliczyc: ";
	int a;
	cin >> a;
	return a;
}

int calculatefactorial(int a){
	int res = a;
	for(int i=a-1;i>0;i--){
		res *= i;
	}
	return res;
}

int displayresult(int a){
	cout << "Silnia podanej liczby wynosi " << a;
}

int main() {
	int a = getnumberfromuser();
	a = calculatefactorial(a);
	displayresult(a);
}
