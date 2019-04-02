#include <iostream>

using namespace std;

const int width = 7;

// Witness the power of functions!
void printLine(int asterisks){
	int space = (width-asterisks)/2;
	for(int j = 0; j < space; j++) cout << " ";
	for(int j = 0; j < asterisks; j++) cout << "*";
	for(int j = 0; j < space; j++) cout << " ";
	cout << endl;
	
}

int main(){
	for(int i = 1; i <= 5; i+=2) printLine(i);
	for(int i = 7; i >= 1; i-=2) printLine(i);
	
	return 0;
}
