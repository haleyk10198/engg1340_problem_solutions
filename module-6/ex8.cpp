#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ifstream fin;
	ofstream fout;
	
	string fileName; 
	cout << "Please input the number file name: ";
	cin >> fileName;
	
	fin.open(fileName);
	int mi, mx;
	for(int i = 0, x; fin >> x; i++){
		if(i == 0){
			mi = mx = x;
		}
		mi = min(mi, x);
		mx = max(mx, x);
	}
	fin.close();
	
	fout.open(fileName, ios_base::app);
	fout << mi << endl;
	fout << mx << endl;
	fout.close();
	
	return 0;
}
