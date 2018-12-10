/* 
Title : PlusEqualsOperator
Author : Danika Luo
Description : Operator overload of += for complex addition
Created : 12/3/18
Modified : 12/10/18 
*/

#include "COMPLEXMATH.h"

using namespace std;

void Complex:: operator+= (const Complex& rhs){
   Complex initialComplex = *this; //create Complex number
   initialComplex = initialComplex + rhs; //add Complex number to initial Complex number
   *this = initialComplex; //set initial Complex number to new value
}
