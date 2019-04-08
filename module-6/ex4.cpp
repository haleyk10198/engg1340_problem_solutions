#include <iostream>

using namespace std;

string units[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string tenths[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string elevens[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

string stringNumbers(int num){
	if(num < 0 || num > 99) return "usage: stringNumber(num: num >= 1 && num <= 99)";
	
	if(num >= 10 && num < 20) return elevens[num-10];
	
	string ret = "";
	if(num > 10){
		ret = tenths[num/10];
		ret += "-";
	}
	ret += units[num%10];
	if(ret.back() == '-')
		// if end with "-" then remove it
		ret.pop_back();
		
	return ret;	
}

int main(){
//	cout << stringNumbers(2) << endl
//		 << stringNumbers(34) << endl;

	int num; cin >> num;
	cout << stringNumbers(num) << endl;
	
	return 0;
}
