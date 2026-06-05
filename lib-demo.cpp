#include <iostream>
#include "mathlib.h"
using namespace std;

class Custom_Num: public Adv_Number {
public:
	Custom_Num(double value=0) : Adv_Number(value) {

	}
};

int main() {
	Custom_Num x;
	cin >> x;
	cout << "testing addition: " << x.add(34) << endl;
	cout << "testing overloaded addition: " << x.add(1234.5678) << endl;
	cout << "testing subtraction: " << x.subtract(34) << endl;
	cout << "testing overloaded subtraction: " << x.subtract(1234.5678) << endl;
	cout << "testing multiplication: " << x.multiply(34) << endl;
	cout << "testing overloaded multiplication: " << x.multiply(1234.5678) << endl;
	cout << "testing division: " << x.divide(0) << endl;
	cout << "testing overloaded division: " << x.divide(12.45) << endl;

	Custom_Num a, b;
	cin >> a >> b;
	cout << "Addition operator overloaded: " << a + b << endl;
	cout << "Subtraction operator overloaded: " << a - b << endl;
	cout << "Multiplication operator overloaded: " << a * b << endl;
	cout << "Division operator overloaded: " << a / b << endl;

	cout<<"Unary Operator Overloading: " << ++a;

	
	return 0;
}
