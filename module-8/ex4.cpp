#include <iostream>

using namespace std;

string* addEntry(string *array, int &size, string newEntry){
	string *ret = new string[size+1];
	
	for(int i = 0; i < size; i++){
		ret[i] = array[i];
	}
	
	ret[size] = newEntry;
	++size;
	
	return ret;
}

string* deleteEntry(string *array, int &size, string entryToDelete){
	for(int i = 0; i < size; i++){
		if(array[i] == entryToDelete){
			string *ret = new string[size-1];
			
			for(int j = 0; j < i; j++){
				ret[j] = array[j];
			}
			for(int j = i+1; j < size; j++){
				ret[j-1] = array[j];
			}
			
			size--;
			return ret;
		}
	}
	
	return array;
}

int main(){
	string *arr = nullptr;
	int sz = 0;
	
	arr = addEntry(arr, sz, "The");
	arr = addEntry(arr, sz, "Chinese");
	arr = addEntry(arr, sz, "University");
	arr = addEntry(arr, sz, "of");
	arr = addEntry(arr, sz, "Hong");
	arr = addEntry(arr, sz, "Kong");
	
	for(int i = 0; i < sz; i++){
		cout << arr[i] << (i+1 == sz? '\n': ' ');
	}
	
	arr = deleteEntry(arr, sz, "Chinese");
	
	for(int i = 0; i < sz; i++){
		cout << arr[i] << (i+1 == sz? '\n': ' ');
	}
	
	arr = deleteEntry(arr, sz, "Ternary");
	
	for(int i = 0; i < sz; i++){
		cout << arr[i] << (i+1 == sz? '\n': ' ');
	}

	return 0;
}
