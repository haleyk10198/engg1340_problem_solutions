#include <iostream>

using namespace std;

int main(){
	
	int num; cin >> num;
	int primeCount = 0;
	
	for(int i = 2; i < num; i++){
		while(num%i == 0){
			if(primeCount != 0){
				cout << "x";
			}
			cout << i;
			num /= i;
			primeCount++;
		}
	}
	
	if(num != 1){
		if(primeCount != 0){
			cout << "x";
		}
		cout << num;
	}
	
	cout << endl;
	
	return 0;
}
