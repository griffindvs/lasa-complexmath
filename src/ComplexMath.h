#ifndef ComplexMath
#define ComplexMath

#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>

using namespace std;

class Complex {
   double re, im;
   friend ostream& operator<<(ostream& lhs, const Complex& rhs);
   friend void operator>>(istream& lhs, Complex rhs);
   friend double abs(Complex c);
   friend double arg(Complex c);
   friend Complex conj(Complex c);
   friend double imag(Complex c);
   friend double real(Complex c);
   friend double norm(Complex c);

	public:
      Complex();
      Complex(double r, double i=0.0);
      void operator= (const Complex& rhs);
      Complex operator+ (const Complex& rhs);
      void operator+= (const Complex& rhs);
      Complex operator- (const Complex& rhs);
      void operator-= (const Complex& rhs);
      Complex operator* (const Complex& rhs);
      void operator*= (const Complex& rhs);
      Complex operator/ (const Complex& rhs);
      void operator/= (const Complex& rhs);
};

#endif
