#include <iostream>

using namespace std;

void printArray(int[], int);
void printArray(int a[], int len){
	for(int i = 0; i < len; i++){
		cout << a[i] << (i+1 == len? '\n': ' ');
	}
}

