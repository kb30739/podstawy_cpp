#include <iostream>
using namespace std;

int getnumberfromuser(){
	cout << "Podaj liczbe ktorej sume od 1 do obliczyc: ";
	int a;
	cin >> a;
	return a;
}

int fib(int a){
	if(a <= 2)
        return 1;
    else
        return fib(a-1) + fib(a-2);
}

int displayfib(int a){
	for(int i=1;i<=a;i++)
		if(i!=a)
			cout << fib(i) << ",";
		else
			cout << fib(i);
}
int main(){
	int a = getnumberfromuser();
	displayfib(a);
}