#include <iostream>

using namespace std;

// double miles_per_gallon(double); 
// double liter_to_gallon(double);
// You could include the declarations if you want

/*
	Usually we divide functions for better modularity
	It's quite puzzling for a function to take liters, miles, 
	and return miles per GALLON isn't it?
	
	Imagine if you are working for a larger project
	at some point you might forget about it and fall for the trap	
*/


double miles_per_gallon(double gallon, double miles){
	return miles / gallon;
}

double liter_to_gallon(double liters){
	return liters/0.264179;
}

int main(){
	// Remember to test your function properly
	
	const int num_of_cars = 2;
	for(int i = 1; i <= num_of_cars; i++){
		double liters, miles; cin >> liters >> miles;
		cout <<"car " << i << " miles per gallon: " << miles_per_gallon(liter_to_gallon(liters), miles) << endl;
	}
	
	return 0;
}
