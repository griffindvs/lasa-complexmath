/*
Title : ConjFunction
Author : Taka Koutsomitopoulos
Description : Returns a Complex object that represents the complex conjugate of an inputted Complex
Created : 12/4/18
Modified : 12/10/18
*/

#include "COMPLEXMATH.h"

using namespace std;

Complex conj(Complex c){
  double realComponent = c.re;
  double imaginaryComponent = c.im;
  Complex complexConjugate(realComponent, imaginaryComponent * -1);
  return complexConjugate;
}
