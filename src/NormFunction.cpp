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
   double norm; //create varible for the norm
   norm = (c.re)*(c.re) + (c.im)*(c.im); //set norm as sum of real component squared and imaginary component squared
   return norm; //return the norm
}