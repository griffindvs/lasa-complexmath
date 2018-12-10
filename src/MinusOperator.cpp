/*
Title : MinusOperator
Author : Taka Koutsomitopoulos
Description : Overloads the subtraction operator to compute the difference of two Complex objects
Created : 11/28/18
Modified : 12/10/18
*/

#include "COMPLEXMATH.h"

using namespace std;

Complex Complex:: operator- (const Complex& rhs){
   Complex finalComplex = rhs;
   finalComplex.re = this->re - rhs.re; // Computes the real number difference between the two Complex objects and stores it
   finalComplex.im = this->im - rhs.im; // Computes the imaginary number difference between the two Complex objects and stores it
   return finalComplex;
}
