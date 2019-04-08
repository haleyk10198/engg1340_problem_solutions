#include <iostream>
#include "helpers.cpp"

using namespace std;

/*
	For vectors:
		copy(src.front(), src.back(), back_inserter(dst));
*/

void copy_array(int src[], int dst[]){
	for(int i = 0; src[i] != '\0'; i++){
		dst[i] = src[i];
	}
}

int main(){
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {0, 0, 0, 0, 0};
	
	copy_array(a, b);
	printArray(b, 5); // see helpers
	
	return 0;
}
