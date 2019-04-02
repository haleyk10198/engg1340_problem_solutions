#include <iostream>

using namespace std;

int main(){
	int a= -15, b;
	a--; // a = -15-1 = 16
	cout << "a = " << a << endl;
	
	{
		int b = 7; // THIS IS A NEW B
		b = 2*a*b; // ^ this b becomes 2*14*7
	}
	
	// back to the old b, which is never touched
	int result = a+b; // 15+(?!), b is not initialized, I cannot predict this!
	cout << "result = " << result << endl;
}
