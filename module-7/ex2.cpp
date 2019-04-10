#include <iostream>
using namespace std;

void replaceAll(string &input, string from, string to);

// this is a reused problem from previous year's lab
// you may find video tutorial of this problem on YouTube

void replaceAll(string &input, string from, string to){
	string output = "";
	// for(auto x: input);
	// Something REALLY useful since C++11, go check it out, it's called
	// Ranged-based loop
	
	for(int i = 0; i < input.length(); ){
		if(input[i] == from[0]){
			int match = 1;
			for(int j = 0; j < from.length(); j++){
				if(input[i+j] != from[j]){
					match = 0;
					break;
				}
			}
			
			if(match){
				output += to;
				i += from.length();
				continue;
			}
		}
		
		output += input[i];
		i++;
	}
	
	input = output;
	return;
}

int main(){
	string input;
	getline(cin, input);
	cout << "Before replace:" << endl << input << endl;
	replaceAll(input, "HKU", "The University of Hong Kong");
	cout << "After replace:" << endl << input << endl;
	replaceAll(input, "The University of Hong Kong", "H.K.U.");
	cout << "After replace:" << endl << input << endl;
}
