#ifndef ComplexMath.h
#define ComplexMath.h

class Complex {
	double re, im;
	friend Complex operator+ (Complex& lhs, Complex* rhs);
   friend Complex operator+= (Complex& lhs, Complex* rhs);
   friend Complex operator- (Complex& lhs, Complex* rhs);
   friend Complex operator-= (Complex& lhs, Complex* rhs);
   friend Complex operator* (Complex& lhs, Complex* rhs);
   friend Complex operator*= (Complex& lhs, Complex* rhs);
   friend Complex operator/ (Complex& lhs, Complex* rhs);
   friend Complex operator/= (Complex& lhs, Complex* rhs);
   friend Complex operator= (Complex& lhs, Complex* rhs);

	public:
		Complex();
		Complex(double r, double i=0.0);
};

#endif