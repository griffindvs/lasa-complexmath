#include "ComplexMath.h"
#include <cmath>
using namespace std;

double abs(Complex c) {
   double magnitude;
   magnitude = sqrt((c.re)*(c.re) + (c.im)*(c.im));
   return magnitude;
}