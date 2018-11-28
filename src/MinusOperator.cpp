#include "ComplexMath.h"
using namespace std;

Complex Complex:: operator- (Complex* rhs){
   Complex finalComplex = *rhs;
   finalComplex.re = this->re + rhs->re;
   finalComplex.re = this->re + rhs->re;
   return finalComplex;
}