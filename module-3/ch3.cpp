#include <iostream>

// This is an extra lab problem set by another TA of last year's team IIRC
using namespace std;

int main(){
	double sum = 0;
	for(int i = 0, x; i < 5; i++){
		// technically i is a variable here
		// I am writing a for loop just for brevity
		// Alternatively I could've repeated this segment for 5 times.
		cin >> x;
		sum += x;
	}
	cout << "average: " << sum/5 << endl;
	
	// Moving average is also a viable solution
}
