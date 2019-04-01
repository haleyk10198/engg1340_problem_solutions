#include <iostream>

using namespace std;

// char positive_or_negative(double); 
// You could include the declaration of this function if you want

char positive_or_negative(double num){
	if(num > 0) return 'P';
	else return 'N';
}

int main(){
	// Remember to test your function properly
	cout << positive_or_negative(123) << endl
		 << positive_or_negative(0) << endl
		 << positive_or_negative(-42) << endl;
	
	return 0;
}
