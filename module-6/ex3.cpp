#include <iostream>
#include <numeric> // for iota
#include "helpers.cpp"

using namespace std;

void swapFrontBack(int a[], int len){
	if(len == 0) return;
	swap(a[0], a[len-1]);
}

int a[10];

int main(){
	
	iota(a, a+10, 0); // a = {0, 1, 2, 3, ...}, just a lazy shorthand :p
	
	swapFrontBack(a, 5);
	printArray(a, 5); // 4 1 2 3 0, see helpers
	
	swapFrontBack(a, 3); // 2 1 4
	printArray(a, 3);
	
	swapFrontBack(a, 1);
	printArray(a, 1); // 2
	
	swapFrontBack(a, 0);
	printArray(a, 0); // ""
	
	return 0;
}
