#pragma once

#include<iostream>
using namespace std;

class Number { //base class
protected:
	double x;
public:

	Number(double a) {
		x = a;
	}
	//getter function
	double get_val() {
		cout << x;
		return x;
	}
	double add(double y) {
		double z = x + y;
		return z;
	}
	double add(double y, double z) {
		return (x + y + z);
	}
	double subtract(double y) {
		return (x - y);
	}
	double subtract(double y, double z) {
		return (x - y - z);
	}
	double multiply(double y) {
		return (x * y);
	}
	double multiply(double y, double z) {
		return (x * y * z);
	}
	double divide(double y) {
		if (y == 0) {
			cout << "\nMath Error\n";
			return 0;
		}
		else {
			return (x / y);
		}
	}
	double divide(double y, double z) {
		if (y == 0 || z == 0) {
			cout << "\nMath Error\n";
			return 0;
		}
		else {
			return ((x / y) / z);
		}
	}
	
};
class Adv_Number:public Number { //derived class
public:
	Adv_Number(double n=0) :Number(n) {

	}
	double operator+ (Adv_Number a) { 
		return (x + a.x);
	}
	double operator- (Adv_Number a) {
		return (x - a.x);
	}
	double operator* (Adv_Number a) {
		return (x * a.x);
	}
	double operator/ (Adv_Number a) {
		if (a.x == 0) {
			cout << "\nMath Error\n";
			return 0;
		}
		else {
			return (x / a.x);
		}
	}
	double operator++ () {
		return (x + 1); 
	}
	friend std::istream& operator>>(std::istream& cin, Adv_Number& a) {
		cout << "\nEnter Value: ";
		cin >> a.x;
		return cin;
	}
	friend std::ostream& operator<<(std::ostream& cout, Adv_Number& a) {
		cout << a.x;
		return cout;
	}
};
