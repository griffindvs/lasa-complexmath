#include "COMPLEXMATH.h"

using namespace std;

void Complex:: operator-= (Complex* rhs){
   Complex initialComplex = *this;
   initialComplex = initialComplex - rhs;
   *this = initialComplex;
}
