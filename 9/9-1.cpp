#include <iostream>
using namespace std;

int getnumberfromuser(){
	cout << "Podaj liczbe ktorej sume od 1 do obliczyc: ";
	int a;
	cin >> a;
	return a;
}

int displayresult(int a){
	cout << "Suma od 1 do podanej wynosi " << a;
}
int calculateSumRecursive(int a){
	if(a == 1)
        return 1;
    else
        return a + calculateSumRecursive(a - 1);
}

int main(){
	int a = getnumberfromuser();
	a = calculateSumRecursive(a);
	displayresult(a);
}