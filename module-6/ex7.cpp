#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ifstream fin;
	string str; 
	cout << "Please input the text file name: ";
	cin >> str;
	
	fin.open(str);
	for(int i = 0; fin >> str; i++){
		if(i%2 == 1){
			if(i/2 > 0) cout << " ";
			cout << str;
		}
	}
	
	fin.close(str);
	
	return 0;
}
