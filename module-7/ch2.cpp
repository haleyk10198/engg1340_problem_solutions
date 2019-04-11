#include <iostream>
#include <map>
#include <fstream>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

// Run in C++17

// Writing in C++17 because it saves me a lot of effort...

map<string, int> wordCount;

int main(){
	string fileName;
	
	cout << "Please input the file name: " << endl;
	cin >> fileName;
	
	ifstream fin;
	fin.open(fileName);
	
	string word;
	while(fin >> word){		
		while(not word.empty() && ispunct(word.back())){
			word.pop_back();
		}
		
		for(auto &x: word){
			x = tolower(x);
		}
		
		if(not word.empty()){
			wordCount[word]++;
		}
	}
	
	vector<pair<string, int>> wordCountVec;
	copy(wordCount.begin(), wordCount.end(), back_inserter(wordCountVec));
	sort(wordCountVec.begin(), wordCountVec.end(), [](auto x, auto y){
		if(x.second != y.second) return x.second < y.second;
		else return x.first < y.first;
	});
	
	for(auto [x, y]: wordCountVec){
		cout << x << ' ' << y << endl;
	}
}
