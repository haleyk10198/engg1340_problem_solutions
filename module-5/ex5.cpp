#include <iostream>

using namespace std;

int main(){
	int x, y, z; cin >> x >> y >> z;
	if(x < y && x < z) 
		// if x is minimum
		cout << x << endl;
	else
		// minimum is either y or z
		cout << (y < z? y: z) << endl; // Make use of ternary expressions
		
	return 0;
}
