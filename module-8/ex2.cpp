#include <iostream>
using namespace std;

int main(){
	int* p1, p2;
	p1 = &p2; // No errors in this line (wait what)
	p1 = p2; // Errors in this line (WAIT WHAT?)
	
	// p2 is actually declared as an integer, not an integer pointer
	
	// A common practice is to write it as 
	// int *p1, *p2; 
	// to prevent misinterpretation
	
	return 0;
}
