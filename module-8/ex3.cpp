#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	double *nums = new double[n];
	
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	
	for(int i = n-1; i >= 0; i--){
		cout << nums[i] << (i == 0? '\n': ' ');
	}
	
	return 0;
}
