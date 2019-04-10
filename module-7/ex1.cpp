#include <iostream>

using namespace std;

int myLength(string str){
	int len = 0;
	for(len = 0; str[len] != '\0'; len++);
	return len;
}

int main(){
	cout << myLength("1234") << endl;
	string str = "56789";
	cout << myLength(str) << endl;
}
