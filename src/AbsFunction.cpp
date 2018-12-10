/*
AbsFunction
Travis Eaves
Created 12/3/18
Desc: absolute value function for complex numbers, returns magnitude
Modified: 12/3/18
*/
#include "COMPLEXMATH.h"

using namespace std;

double abs(Complex c) {
   double magnitude;
   magnitude = sqrt((c.re)*(c.re) + (c.im)*(c.im));
   return magnitude;
}