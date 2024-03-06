#include "Complex.h"
Complex::Complex(int a, int b) {
	real = a;
	im = b;
}
Complex Complex::add(const Complex& z)const {
	return { real + z.real, im + z.im };
}
Complex Complex::sub(const Complex& z)const {
	return { real - z.real, im - z.im };
}
Complex Complex::multiply(const Complex& z)const {
	return { real * z.real - im * z.im, real * z.im + im * z.real };
}
Complex Complex::divide(const Complex& z)const {
	return { (real * z.real + im * z.im) / (z.real * z.real + z.im * z.im), (im * z.real - real * z.im) / (z.real * z.real + z.im * z.im) };
}
Complex Complex::negate()const {
	return { -real,-im };
}
Complex Complex::conjugate()const {
	return { real, -im };
}