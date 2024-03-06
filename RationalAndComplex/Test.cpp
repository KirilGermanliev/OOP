#include "Rational.h"
#include<iostream>
int main() {
	Rational r1(5, 6);
	Rational r2(7, 5);
	r1.print();
	Rational r3 = r1.add(r2);
	r3.print();
	Rational r4 = r1.sub(r2);
	r4.print();
	Rational r5 = r1.multiply(r2);
	r5.print();
	Rational r6 = r1.divide(r2);
	r6.print();
	return 0;
}