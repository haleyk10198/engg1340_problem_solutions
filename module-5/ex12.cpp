#include <iostream>

using namespace std;

// double average(int, double); 
// You could include the declaration of this function if you want

double average(int x, double y){
	// Remember {int}+{double} returns a double since C++ don't want to lose precision
	return (x+y)/2;
}

int main(){
	// Remember to test your function properly
	cout << average(1, 2.0) << endl
		 << average(3, 5.0) << endl
		 << average(5, 9.0) << endl;
	
	return 0;
}
