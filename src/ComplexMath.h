#ifndef ComplexMath
#define ComplexMath

#include <iostream>

using namespace std;

class Complex {
	double re, im;

	public:
		Complex();
		Complex(double r, double i=0.0);
      void operator= (Complex* rhs);
      Complex operator+ (Complex* rhs);
      void operator+= (Complex* rhs);
      Complex operator- (Complex* rhs);
      void operator-= (Complex* rhs);
      Complex operator* (Complex* rhs);
      void operator*= (Complex* rhs);
      Complex operator/ (Complex* rhs);
      void operator/= (Complex* rhs);
      
      double abs();
      double arg();
};

#endif