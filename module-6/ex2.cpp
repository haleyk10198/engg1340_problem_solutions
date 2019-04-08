#include <iostream>

using namespace std;

bool sieve[1000];

void init(){
	for(int i =  2; i < 1000; i++)
		sieve[i] = true;
		
	for(int i = 2; i < 1000; i++){
		if(sieve[i])
		// if i is a prime
		{
			for(int j = i*i; j < 1000; j+=i)
			// why does j = i*i also works? think of the maths :)
			{
				sieve[j] = false;
			}
		}
	}
}

int main(){
	
	init();
	
	for(int i = 0; i < 1000; i++){
		if(sieve[i]){
			cout << i << " is a prime" << endl;			
		}
	}
	
	return 0;
}
