#include <iostream>

using namespace std;

/*
	What the program meant to achieve:
		Average(Overall) score of a student's grade in ENGG111:
		(assignment average)*a_weight + test*t_weight + exam*e_weight
*/

int main(){
	
	int a1, a2, a3, a4, test, exam, average;
	
	double a_weight = 0.2, test_weight = 0.2; 
	// sum of weights should be 1, probably forgot to initialize a_weight
	double exam_weight = 0.6;
	
	cout << "a1: ";
	cin >> a1; // wrong direction of cin operator
	
	cout << "a2: ";
	cin >> a2;
	
	cout << "a3: ";
	cin >> a3;
	
	cout << "a4: ";
	cin >> a4;
	
	cout << "Test: ";
	cin >> test;
	
	cout << "Exam: ";
	cin >> exam; // inconsistent variable name
	
	double assignment_average = (a1+a2+a3+a4)/4.0; 
	// It is not an integer, be aware of integer division too
	// Missing ; sign
	
	double course_average = assignment_average*a_weight + test*test_weight + exam*exam_weight;
	// Incorrect usage of *=, since a *= b+c <-> a = a*(b+c)
	
	cout << "Average: " << course_average << endl;
	// missing << in the middle
	
	return 0;
}
