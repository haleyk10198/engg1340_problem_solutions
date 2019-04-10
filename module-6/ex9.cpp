#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm> 
// for sorting, I am not writing selection sort here
// Note that in the project you can neither use the sort from algorithm
// Nor the C version qsort

using namespace std;

int main(){
	
	ifstream fin;
	ofstream fout;
	
	string fileName; 
	cout << "Please input the number file name: ";
	cin >> fileName;
	
	fin.open(fileName);
	vector<int> numbers;
	// int numbers[100];
	// or create a reasonably large array
//	copy(istream_iterator<int>(fin), istream_iterator<int>(), back_inserter(numbers));
//	elegant one liner you might be interested
	
	for(int i = 0, x; fin >> x; i++){
		numbers.push_back(x);
	}
	
//	for(int i = 0; fin >> numbers[i]; i++);
//	if array was used

	fin.close();

	sort(numbers.begin(), numbers.end());
	
	cout << "Please specify the output file name: ";
	cin >> fileName;
	fout.open(fileName);
//	copy(numbers.begin(), numbers.end(), ostream_iterator<int>(fout, " "));
//	elegant one liner that you might be interested
	fout.close();
	
//	fout.open(fileName, ios_base::app);
//	fout << mi << endl;
//	fout << mx << endl;
//	fout.close();
	
	return 0;
}
