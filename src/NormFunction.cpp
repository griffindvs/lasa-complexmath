/*
Norm Function
Danika Luo
Created 12/7/18
Desc: Returns the square of the magnitude of its argument.
Modified: 12/7/18
*/

#include "COMPLEXMATH.h"
#include <cmath>

using namespace std;

double norm(Complex c) {
   double norm;
   norm = (c.re)*(c.re) + (c.im)*(c.im);
   return norm;
}