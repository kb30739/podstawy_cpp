#include <iostream>
using namespace std;

int main() {
	int a = 0;
	for(int i = 1;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				if(i==j || i==k || j==k)
					continue;
				cout << i << j << k << endl;
				a += 1;
			}
		}
	}
	cout << "Liczb bez powtarzajacych sie cyfr: " << a;
}