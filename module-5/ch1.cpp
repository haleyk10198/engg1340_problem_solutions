#include <iostream>

using namespace std;

int main(){
	int cycleCount = 0;
	for(int i = 1; ++i < 10; ){
		cycleCount++;
		// cout << i << endl;
		/*
			Adding a cout << i << endl helps a lot in reasoning
			I intentionally did not included a bracket when a set this problem
			Since some students were still having troubles with multi-line for-loops
			
			Anyways, the program work flow is as follows:
			i = 1
			check ++i = 2 < 10
			cycleCount++, .. = 1
			....
			check ++i = 9 < 10
			cycleCount++, .. = 8
			chekc ++i = 10 < 10, break
		*/
	}
	
	// cycleCount = 8
	cout << cycleCount;
}
