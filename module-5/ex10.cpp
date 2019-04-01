#include <iostream>

using namespace std;

int main(){
	for(int i = 6; i >= 0; i--){
		// i is max number in a row
		for(int j = 0; j <= i; j++){
			// j is the number to be outputted
			cout << j;
		}
		cout << endl;
	}
	
	return 0;
}
