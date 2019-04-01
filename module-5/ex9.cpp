#include <iostream>

using namespace std;

int main(){
	int sumneg = 0, sumpos = 0;
	for(int i = 0, num; i < 5; i++){
		cin >> num;
		
		// do case work within for loop instead of outside of it
		if(num < 0) sumneg += num;
		else sumpos += num;
	}
	
	cout << sumneg << ' ' << sumpos << endl;
		
	return 0;
}
