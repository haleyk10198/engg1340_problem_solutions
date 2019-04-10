#include <iostream>
#include <numeric>
#include <sstream>
#include <cstring>
#include <algorithm>

using namespace std;

int buckets[13];

void printPairs(string str){
	memset(buckets, 0, sizeof(buckets));
//	fill(buckets, buckets+13, 0);
	
	stringstream ss(str);
	
	char ch; int num;
	for(int i = 0; i < 10; i++){
		ss >> ch >> num;
		buckets[num]++;
	}
	
	num = 0;
	for(int i = 0; i < n; i++){
		num += buckets[i]/2;
	}
	
	cout << num << " Pairs" << endl;
	
/*
	cout << accumulate(buckets, buckets+13, 0, [](int acc, int num){
		return acc+num/2;
	}) << " Pairs" << endl;
*/
}

int main(){
	printPairs("A13 B5 D6 C5 B8 A6 C4 B10 D5 C6");
	printPairs("A2 A1 B2 B1 C2 C1 D2 D3 D5 B5");
	printPairs("B6 B9 A9 C9 D12 D6 A6 C6 A12 D9");
}
