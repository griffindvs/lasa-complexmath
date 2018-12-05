#include "ComplexMath.h"
#include <cmath>

using namespace std;

Complex Complex::conj(){
  double realComponent = this->re;
  double imaginaryComponent = this->im;
  Complex complexConjugate(realComponent, imaginaryComponent * -1);
  return complexConjugate;
}
