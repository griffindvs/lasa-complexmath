#include "COMPLEXMATH.h"
using namespace std;

void Complex:: operator= (Complex& rhs){
   Complex finalComplex = *this;
   finalComplex.re = rhs.re;
   finalComplex.im = rhs.im;
   *this = finalComplex;
}
