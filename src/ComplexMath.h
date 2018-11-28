#ifndef ComplexMath
#define ComplexMath

#include <iostream>

using namespace std;

class Complex {
	double re, im;
	friend Complex operator+ (Complex& lhs, Complex* rhs);
//    friend Complex operator+= (Complex& lhs, Complex* rhs);
//    friend Complex operator- (Complex& lhs, Complex* rhs);
//    friend Complex operator-= (Complex& lhs, Complex* rhs);
//    friend Complex operator* (Complex& lhs, Complex* rhs);
//    friend Complex operator*= (Complex& lhs, Complex* rhs);
//    friend Complex operator/ (Complex& lhs, Complex* rhs);
//    friend Complex operator/= (Complex& lhs, Complex* rhs);
//    friend Complex operator= (Complex& lhs, Complex* rhs);

	public:
		Complex();
		Complex(double r, double i=0.0);
      HelloWorld();
};

#endif