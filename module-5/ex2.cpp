#include <iostream>

using namespace std;

int main(){
	int b = 2;
	if(b == 2)
		b++;
	if(b == 2); // if (b == 2) then "";
		b++; // This line is not within the if condition
		
	cout << b; // b++; is executed twice in this program, so the output is 4.
	
	return 0;
}
