/* 
Title : NormFunction
Author : Danika Luo
Description : Returns the square of the magnitude of its argument.
Created : 12/7/18
Modified : 12/10/18 
*/

#include "COMPLEXMATH.h"

using namespace std;

double norm(Complex c) {
   double norm;
   norm = (c.re)*(c.re) + (c.im)*(c.im);
   return norm;
}