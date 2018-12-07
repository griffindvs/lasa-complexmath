#include "COMPLEXMATH.h"

using namespace std;

double norm(Complex c) {
   double norm;
   norm = (c.re)*(c.re) + (c.im)*(c.im);
   return norm;
}