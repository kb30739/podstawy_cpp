#include <iostream>
#include <fstream>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main(){
	
    ifstream plik("dane3.txt");
    if(!plik){
    	cout << "Plik dane3.txt nie istnieje. Tworzenie pliku z przykladowymi danymi....";
    	ofstream plik("dane3.txt");
    	plik << "Jan Kowalski 25\nAnna Nowak 32\n";
    } else{
    	cout << "Czy chcesz dopisac kolejna osobe (t/n) ";
    	string a;
    	cin >> a;
    	if(a == "t" || a == "T"){
    		string a, b, c;
    		cout << "Podaj imie: ";
    		cin >> a;
    		cout << "Podaj nazwisko: ";
    		cin >> b;
    		cout << "Podaj wiek: ";
    		cin >> c;
    		ofstream plik("dane3.txt", ios::app);
    		plik << endl << a << " " <<  b << " " << c;
		}
	} 
	plik.close();
	
	cout << "Dane w pliku:\n";
	
    ifstream plik2("dane3.txt");
	string imie, nazwisko, wiek;
	while(!plik2.eof()){
		plik2 >> imie >> nazwisko >> wiek;
		cout << "imie: " << imie << " nazwisko: " << nazwisko << " wiek: " << wiek << endl;
	};
}
