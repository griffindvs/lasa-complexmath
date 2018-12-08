#include "COMPLEXMATH.h"

using namespace std;

double arg(Complex c){
   double y, x;
   y = c.im;
   x = c.re;

   double angle;
   angle = atan(y/x);
   return angle;
}
