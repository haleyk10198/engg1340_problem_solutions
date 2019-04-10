#include <iostream>
using namespace std;
int main(){
	int i1, i2;
	int *p1 = &i1, *p2 = &i2;	
	*p1 = 10; // i1 = 10;
	*p2 = 20; // i2 = 20;
	cout << *p1 << " " << *p2 << endl;
	p1 = p2; // Now p1 "points" to the number written at the same place as p2, i.e. i2
	cout << *p1 << " " << *p2 << endl;
	*p1 = 30;
	cout << *p1 << " " << *p2 << endl;
	
/*
	If line 9 was changed to *p1 = *p2
	The meaning of that line becomes
	"The number written at the place pointed by p1 is overwritten by the number written at p2"
	
	So, line 10 still outputs "20 20"
	but line 12 outputs "30 20"
	since the write operation is still issued to i1 instead of i2
*/

	return 0;
}
