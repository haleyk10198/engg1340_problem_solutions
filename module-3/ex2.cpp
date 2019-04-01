#include <iostream>

using namespace std;

int main(){
	cout << "6 + 6 = " << "6 + 6" << endl;
	//                      ^ This is a string constant, not a numerical expression
	cout << "6 + 6 = " << 6+6 << endl;
	
	return 0;
}
