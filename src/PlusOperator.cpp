#include "COMPLEXMATH.h"

using namespace std;

Complex Complex:: operator+ (Complex& rhs){
   Complex finalComplex = rhs;
   finalComplex.re = this->re + rhs.re;
   finalComplex.im = this->im + rhs.im;
   return finalComplex;
}
