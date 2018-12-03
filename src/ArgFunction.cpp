#include "ComplexMath.h"
#include <cmath>

using namespace std;

double Complex::arg(){
   double y, x;
   y = this->im;
   x = this->re;
   
   double angle;
   angle = cmath.atan(y/x);
}