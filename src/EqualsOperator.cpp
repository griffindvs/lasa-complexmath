/* 
Title : EqualsOperator
Author : Griffin Davis
Description : Overloads the equals operator for the Complex class.
Created : 12/3/18
Modified : 12/8/18 
*/

#include "COMPLEXMATH.h"
using namespace std;

Complex& Complex:: operator= (const Complex& rhs){

  this->re=rhs.re; //Sets the real component
  this->im=rhs.im; //Sets the imaginary component
  return *this; //Returns the modified Complex instance
}
