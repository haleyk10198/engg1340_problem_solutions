#include <iostream>
using namespace std;

// The name[] array contains a list of teaching staff from last year's ENGG111EF subclass
// You have guessed it
// Go find the video tutorial on YouTube

string returnNickNameGivenLastName(string name[], int n, string lastName);

string returnNickNameGivenLastName(string name[], int n, string lastName){
	for(int i = 0, p1, p2; i < n; i++){
		p1 = name[i].find(",");
		string fstName = name[i].substr(0, p1); 
		p2 = name[i].find("(");
		string lstName = name[i].substr(p1+2, (p2-(p1+2)-1));
		
		if(lstName == lastName) return fstName;
	}
	
	return "Not found!";
}

int main(){
	string name[] = {"Loretta, Choi (Loretta)",
						"Kin Hei, Kwok (Haley)",
						"Tsz Hei, Tse (Henry)",
						"Luv, Khanna (Luv)",
						"Tsz Wa, Tseng (Lucas)",
						"Tsz Ching, Fung (Sara)"};
						
	int numOfUsers = 6;
	string lastName;
	cin >> lastName;
	cout << returnNickNameGivenLastName(name, numOfUsers, lastName) << endl;
	
	return 0;
}

