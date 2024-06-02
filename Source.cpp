#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//1
	double a1, b1; 
	cout << "input a, b: ";
	cin >> a1 >> b1;
	cout << "S: " << a1 * b1 / 2; cout<< endl;
	cout << "G: " << sqrt(a1 * a1 + b1 * b1); cout << endl;

	//2
	double a2;
	double b2;
	double c2;

	cout << "Input number" << endl;
	cin >> a2;
	b2 = 1 / a2;
	
	c2 = b2 * a2;
	if (c2 == 1) {
		cout <<  << ": obtanyo samo sebe"<<endl;
	}
	else {
		cout << "net obratnih"<<endl;
	}


	//3
	double a3{};
	cout << "Input number" << endl;
	cin >> a3;
	cout<< a3/10;
	return 0;
}