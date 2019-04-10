#include <iostream>
using namespace std;

struct Entry{
	string firstName;
	string lastName;
	char dorm;
	int age;
};

bool equal(const Entry e1, const Entry e2)
// it's a common practice to use const for comparisons to prevent accidental changes
{
	return (e1.firstName == e2.firstName) && (e1.lastName == e2.lastName) && (e1.dorm == e2.dorm) && (e1.age == e2.age);
}

/*
Alternatively,
We will learn this in COMP2123

bool operator==(const Entry e1, const Entry e2){
	return (e1.firstName == e2.firstName) && (e1.lastName == e2.lastName) && (e1.dorm == e2.dorm) && (e1.age == e2.age);
}
*/

int main(){
	Entry e1 = {"Harry", "Potter", 'C', 25};
	Entry e2 = {"James", "Bond", 'D', 40};
	
	if(equal(e1, e2)){
		cout << "same" << endl;
	}
	else{
		cout << "different" << endl;
	}
	
	Entry e3 = {"Harry", "Potter", 'C', 25};
	if(equal(e1, e3))
	// e1 == e3
	{
		cout << "same" << endl;
	}
	else{
		cout << "different" << endl;
	}
	
	return 0;
}
