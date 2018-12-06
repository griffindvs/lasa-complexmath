#include "COMPLEXMATH.h"
#include <iostream>

using namespace std;

ostream& operator<< (ostream& lhs, const Complex& rhs){
   lhs << "(" << rhs.re << ", " << rhs.im << ")";
   return lhs;
}