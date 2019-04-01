#include <iostream>

using namespace std;

int main(){
	int a = 0;
	cout << a << endl;
	if(a == 0)
	// "=" is assignment, "==" is comparison
	// an assignment expression returns the reference of the variable that is being assigned
	// Hence (a = 0) returns a value of 0 which is considered as false in C++
	// Hence the original output of "a is not 0"
	{
		cout << "a is 0";
	}
	else
		cout << "a is not 0";
		
	return 0;
}
