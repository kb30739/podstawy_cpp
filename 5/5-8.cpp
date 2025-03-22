#include <iostream>
using namespace std;

int main() {
	int width, height;
	cout << "Podaj szerokosc:";
	cin >> width;
	cout << "Podaj wysokosc:";
	cin >> height;
	
	int margin = 0;
	for(int i=0;i<height;i++){
		if(width <= 0)
			break;
		for(int m=0;m<margin;m++)
			cout << " ";
		for(int s=0;s<width;s++)
			cout << "*";
		for(int m=0;m<margin;m++)
			cout << " ";
		width -= 2;
		margin += 1;
		cout << endl;
	}
}