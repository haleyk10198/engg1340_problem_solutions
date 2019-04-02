#include <iostream>
#include <cmath>

using namespace std;

void heron(double a, double b, double c, double &area, double &perimeter){
	perimeter = a+b+c;
	double s = perimeter/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
	
	double x, y;
	heron(3, 4, 5, x, y);
	cout << x << ' ' << y << endl;
	heron(7, 24, 25, x, y);
	cout << x << ' ' << y << endl;
	heron(1, 1, 1, x, y);
	cout << x << ' ' << y << endl;
	
	return 0;
}
