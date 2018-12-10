/*
Title: MultiplyEqualsOperator
Author: Travis Eaves
Description: operator overload of *= for complex multiplication
Created: 12/3/18
Modified: 12/10/18
*/
#include "COMPLEXMATH.h"

using namespace std;

void Complex::operator*= (const Complex& rhs){
   Complex initialComplex = *this;
   initialComplex = initialComplex * rhs;
   *this = initialComplex;
}
