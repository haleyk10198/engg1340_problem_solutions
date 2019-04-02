#include <iostream>

using namespace std;

bool isPrime(int x){
	if(x < 2) return false;
	
	for(int i = 2; i <= x/i; i++)
	// Or write 1LL*i*i to prevent overflow
	{
		if(x%i == 0) return false;
	}
	
	// No divisor
	return true;
}

//int main(){
//	
//	for(int i = 1; i < 100; i++)
//		cout << i << " is " << (isPrime(i)? "": "not ") << "a prime" << endl;
//		
//	return 0;
//}
