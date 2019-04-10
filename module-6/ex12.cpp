#include <iostream>
#include <fstream>
#include <algorithm>
// Of course, you should've wrote your own sort algorithm
// ... but I am too lazy to do so.
using namespace std;

#define MAX_ENTRIES 100

struct Entry{
	string firstName;
	string lastName;
	char dorm;
	int age;
	
	bool equal(const Entry rhs){
		return (this->firstName == rhs.firstName) && (this->lastName == rhs.lastName) && (this->dorm && rhs.dorm) && (this->age && rhs.age);
	}
	
	bool operator==(const Entry rhs) const
	// Similarly
	// const at the end is a "promise" of this record won't be changed.
	{
		return (this->firstName == rhs.firstName) && (this->lastName == rhs.lastName) && (this->dorm && rhs.dorm) && (this->age && rhs.age);
	}
	
	bool operator<(const Entry rhs) const{
		return this->age < rhs.age;
	}
	
	istream& operator>>(istream &in){
		in >> this->firstName >> this->lastName >> this->dorm >> this->age;	
		return in;
	}
	
	// if you are interested, you may Google how to write an output operator :)
}entries[MAX_ENTRIES];

bool equal(const Entry e1, const Entry e2)
// it's a common practice to use const for comparisons to prevent accidental changes
{
	return (e1.firstName == e2.firstName) && (e1.lastName == e2.lastName) && (e1.dorm == e2.dorm) && (e1.age == e2.age);
}

// Alternatively
bool operator==(const Entry e1, const Entry e2){
	return (e1.firstName == e2.firstName) && (e1.lastName == e2.lastName) && (e1.dorm == e2.dorm) && (e1.age == e2.age);
}

int main(){
	
	ifstream fin;
	
	string fileName; 
	cout << "Please input the number file name: ";
	cin >> fileName;
	
	fin.open(fileName);
	
	int arraySize = 0;
	for(arraySize = 0; fin >> entries[arraySize].firstName >> entries[arraySize].lastName >> entries[arraySize].dorm >> entries[arraySize].age; arraySize++);
	// alternatively you could've replaced the condition with fin >> entries[arraySize] since I have wrote the input operator
	
	sort(entries, entries+arraySize);
	// This also works even without the < operator
	// This is called a Lambda comparator, you may have also came across this in ENGG1340
	// You may learn more about anonymous functions in Principle of Programming Languages
	sort(entries, entries+arraySize, [](const Entry e1, const Entry e2){
		return e1.age < e2.age;
	});
	
	for(int i = 0; i < arraySize; i++){
		cout << entries[i].firstName << ' ' << entries[i].lastName << ' ' << entries[i].dorm << ' ' << entries[i].age << endl;
	}
	
	return 0;
}
