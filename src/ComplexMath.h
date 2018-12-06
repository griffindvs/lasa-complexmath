#ifndef ComplexMath
#define ComplexMath

#include <iostream>

using namespace std;

class Complex {
   double re, im;
   friend ostream& operator<<(ostream& lhs, const Complex& rhs);
   friend Complex operator>>(istream& lhs, Complex& rhs);
   friend double abs(Complex c);
   friend double arg(Complex c);
   friend Complex conj(Complex c);

	public:
   Complex();
   Complex(double r, double i=0.0);
   void operator= (Complex* rhs);
   Complex operator+ (Complex* rhs);
   void operator+= (Complex* rhs);
   Complex operator- (Complex* rhs);
   void operator-= (Complex* rhs);
   Complex operator* (Complex& rhs);
   void operator*= (Complex* rhs);
   Complex operator/ (Complex* rhs);
   void operator/= (Complex* rhs);
};

#endif
