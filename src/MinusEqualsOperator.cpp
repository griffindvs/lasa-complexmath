/*
Title : MinusOperator
Author : Taka Koutsomitopoulos
Description : Overloads the subtraction/assignment operator to compute the difference of two Complex objects and set the left hand side equal to the result.
Created : 12/3/18
Modified : 12/10/18
*/

#include "COMPLEXMATH.h"

using namespace std;

void Complex:: operator-= (const Complex& rhs){
   Complex initialComplex = *this;
   initialComplex = initialComplex - rhs;
   *this = initialComplex;
}
