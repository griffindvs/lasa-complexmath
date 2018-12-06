#include "ComplexMath.h"
#include <cmath>

using namespace std;

Complex conj(Complex c){
  double realComponent = c.re;
  double imaginaryComponent = c.im;
  Complex complexConjugate(realComponent, imaginaryComponent * -1);
  return complexConjugate;
}
