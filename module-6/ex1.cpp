#include <iostream>

using namespace std;

char cstr[8];

int main(){
	cin >> cstr;
	
	for(int i = 8-1; i >= 0; i--)
		cout << cstr[i];
		
	return 0;
}
