#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Podaj liczbe N:";
	cin >> a;
	
	for(int i=1;i<=a;i++){
		if(i%2==0){
			continue;
		} else {
			cout << i << endl;
		}
	}
}