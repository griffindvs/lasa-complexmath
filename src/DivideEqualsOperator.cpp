/*
Title: DivideEqualsOperator
Author: TJ Arora
Description: operator overload of /= for complex numbers
Created: 12/7/18
Modified: 12/10/18
*/
#include "COMPLEXMATH.h"

using namespace std;

void Complex::operator/= (const Complex& rhs){
   Complex initialComplex = *this;
   initialComplex = initialComplex / rhs;//overloaded / operator for complex
   *this = initialComplex;
}
