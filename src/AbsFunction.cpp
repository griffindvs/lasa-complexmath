/*
Title: AbsFunction
Author: Travis Eaves
Description: absolute value function for complex numbers, returns magnitude
Created: 12/3/18
Modified: 12/10/18
*/
#include "COMPLEXMATH.h"

using namespace std;

double abs(Complex c) {
   double magnitude;
   magnitude = sqrt((c.re)*(c.re) + (c.im)*(c.im));
   return magnitude;
}