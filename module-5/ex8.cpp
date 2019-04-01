#include <iostream>

using namespace std;

int main(){
	// This is a common implementation for multiplication table
	
	int count = 3;
	for(int i = 1; i <= count; i++){
		for(int j = 1; j <= count; j++)
			cout << i << " x " << j << " = " << i*j << endl;
	}	
	
	return 0;
}
