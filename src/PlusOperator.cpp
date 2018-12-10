/* 
Title : PlusOperator
Author : Danika Luo
Description : Operator overload of + for complex addition
Created : 12/3/18
Modified : 12/10/18 
*/

#include "COMPLEXMATH.h"

using namespace std;

Complex Complex:: operator+ (const Complex& rhs){
   Complex finalComplex = rhs;
   finalComplex.re = this->re + rhs.re; //Add real part
   finalComplex.im = this->im + rhs.im; //Add imaginary part
   return finalComplex;
}
