#include "ComplexMath.h"

using namespace std;

ostream& operator<< (ostream& lhs, Complex& rhs){
   lhs << "(" << rhs->re << ", " << rhs->im << ")";
}