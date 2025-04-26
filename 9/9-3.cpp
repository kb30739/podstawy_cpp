#include <iostream>
using namespace std;

int pow(int base, int p){
	if(p == 1)
		return base;
	else
		return pow(base, p-1) * base;
}

int displayresult(int res, int base, int p){
	cout << base << " do potegi " << p << " wynosi " << res;
}

int main(){
	int a, p;
	cout << "Podaj liczbe podstawowa: ";
	cin >> a;
	cout << "Podaj potege: ";
	cin >> p;
	
	int res = pow(a, p);
	displayresult(res, a, p);
	
}