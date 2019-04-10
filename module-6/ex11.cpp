#include <iostream>
using namespace std;

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
};

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
	Entry e1 = {"Harry", "Potter", 'C', 25};
	Entry e2 = {"James", "Bond", 'D', 40};
	
	if(e1.equal(e2)){
		cout << "same" << endl;
	}
	else{
		cout << "different" << endl;
	}
	
	Entry e3 = {"Harry", "Potter", 'C', 25};
	if(e1 == e3)
	// e1 == e3
	{
		cout << "same" << endl;
	}
	else{
		cout << "different" << endl;
	}
	
	return 0;
}
