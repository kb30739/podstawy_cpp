#include <iostream>
#include <string>
using namespace std;

string getTextFromUser(){
	string text;
	cout << "Wprowadz ciag znakow: ";
	getline(cin, text);
	return text;
}

string reverseText(string text){
	string text2;
	for(int i = 0; i < text.length(); i++){
		text2 += text[text.length() - 1 - i];
	}
	return text2;
}

void displayText(string text){
	cout << "Odwrocony tekst: " << text;
	return;
}
int main() {
	string text;
	text = getTextFromUser();
	text = reverseText(text);
	displayText(text);
}
