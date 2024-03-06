#ifndef RATIONAL_H
#define RATIONAL_H
class Rational
{
private:
	int a;
	int b;
public:
	Rational();
	Rational(int a, int b);
	Rational add(const Rational& r)const;
	Rational sub(const Rational& r)const;
	Rational multiply(const Rational& r)const;
	Rational divide(const Rational& r)const;
	void print()const;
};

#endif RATIONAL_H