#include <iostream>

using namespace std;

int main(){
	int c = 3;	// c = 3;
	int d = c++; // d = 3, c = 3;
				 // d = 3, c = 3+1 = 4
	
	if(c++ == 4 && d == 3)
	// d = 3, c = 4
	// c == 4 is true, after comparison execute c++
	// d = 3, c = 4+1 = 5
	// d == 3 is true
		cout << "1: " << c << " " << d << endl; // output 1: 5 3
	if(++c == 5 && d-- == 3)
	// execute ++c before comparison, c = 6
	// c == 5 is false
	// lazy evaluation is used and d-- == 3 is skipped.
		cout << "2: " << c-- << " " << d << endl;
	cout << "3: " << c << " " << d << endl; // output 3: 6 3
	
	return 0;
}
