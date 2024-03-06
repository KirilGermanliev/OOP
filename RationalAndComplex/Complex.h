#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
private:
	int real;
	int im;
public:
	Complex(int a, int b);
	Complex add(const Complex& r)const;
	Complex sub(const Complex& r)const;
	Complex multiply(const Complex& r)const;
	Complex divide(const Complex& r)const;
	Complex negate()const;
	Complex conjugate()const;
};

#endif COMPLEX_H