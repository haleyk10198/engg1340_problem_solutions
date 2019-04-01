#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	
	a = 4, b = 3, c = 2;
	cout << (a += b += c) << endl; // a += (b += c)
	cout << a << ' ' << b << ' ' << c << endl;
	
	a = 4, b = 3, c = 2;
	cout << (a *= b *= c) << endl; // a *= (b *= c)
	cout << a << ' ' << b << ' ' << c << endl;
	
	a = 4, b = 3, c = 2;
	cout << (a += b %= c) << endl; // a += (b %= c)
	cout << a << ' ' << b << ' ' << c << endl;
	
	a = 4, b = 3, c = 2;
	cout << ((a += b) *= c) << endl; // (a += b) *= c, keep a as the reference
	cout << a << ' ' << b << ' ' << c << endl;
}
