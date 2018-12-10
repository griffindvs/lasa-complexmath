/*
Title: MultipyOperator
Author: Travis Eaves
Description: operator overload of * for complex multiplication
Created: 11/28/18
Modified: 12/10/18
*/
#include "COMPLEXMATH.h"

using namespace std;

Complex Complex::operator* (const Complex& rhs){
   Complex product;
   //distribution and simplification of two complex numbers
   product.re = (this->re * rhs.re) + (-1 * (this->im * rhs.im));//i^2 = -1
   product.im = (this->re * rhs.im) + (this->im * rhs.re);
   return product;
}
