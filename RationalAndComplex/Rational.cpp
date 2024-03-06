#include "Rational.h"
#include <iostream>
Rational::Rational() {
	a = 0;
	b = 1;
}
Rational::Rational(int num1, int num2) {
	a = num1;
	if (num2 != 0) {
		b = num2;
	}
	else {
		num2 = 1;
	}
}
Rational Rational::add(const Rational& r)const {
	return{ a * r.b + r.a * b,b * r.b };
}
Rational Rational::sub(const Rational& r)const {
	return{ a * r.b - r.a * b,b * r.b };
}
Rational Rational::multiply(const Rational& r)const {
	return{ a * r.a,b * r.b };
}
Rational Rational::divide(const Rational& r)const {
	return{ a * r.b,b * r.a };
}
void Rational::print()const {
	std::cout << std::endl << a << "/" << b;
}