#include <iostream>

using namespace std;

int main(){
	char p1, p2;
	cin >> p1 >> p2;
	
	if(p1 < 'a')
		// uppercase to lowercase
		p1 += 32;
	if(p2 < 'a')
		// do some research on why this works :)
		p2 ^= 32;
	
	if(p1 == p2)
	// if same play then draw
		cout << "draw" << endl;
	else if(p1 == 'p' || p2 == 'p')
	// if someone plays paper
	{
		if(p1 == 'r' || p2 == 's') 
		// if p1 lose to rock or p2 wins by scissor
			cout << "p2 wins" << endl;
		else
		// we have exhausted p2's win and draw condition
			cout << "p1 wins" << endl;
	}
	else if(p1 == 'r')
		// only case is some player played R and other player played scissor
		cout << "p1 wins" << endl;
	else
		cout << "p2 wins" << endl;
}
