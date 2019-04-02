#include <iostream>
#include "ex14.cpp"
#include "ch4.cpp"

using namespace std;

/*
	1 is the only proper divisor of a prime
	
	There is no perfect prime :)
*/

int main(){
	for(int i = 1; i < 1000; i++){
		if(isPrime(i) && isPerfect(i)){
			cout << i << " is a perfect prime!" << endl;
		}
	}
	return 0;
}
