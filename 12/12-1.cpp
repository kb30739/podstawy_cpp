#include <iostream>
#include <fstream>
using namespace std;

string linia;
int main(){
	ifstream plik("dane.txt");
    string imiona[3];
    string nazwiska[3];
    string wieki[3];
    
    int count = 0;
    while(!plik.eof()){
    	plik >> imiona[count] >> nazwiska[count] >> wieki[count];
    	count += 1;
	}
    
    
    cout << "imie: " << imiona[0] << " nazwisko: " << nazwiska[0] << " wiek: " << wieki[0];
    cout << "\nimie: " << imiona[1] << " nazwisko: " << nazwiska[1] << " wiek: " << wieki[1];
    cout << "\nimie: " << imiona[2] << " nazwisko: " << nazwiska[2] << " wiek: " << wieki[2];
	
}
