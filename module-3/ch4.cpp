#include <iostream>

using namespace std;

int main(){
	int num; cin >> num;
	
	int hundreds = num/100;
	int unit = num%10;
	
	num -= hundreds*100;
	num -= unit;
	
	num += unit*100;
	num += hundreds;
	
	cout << num << endl;
}
