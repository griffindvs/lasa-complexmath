/* 
Title : InsertOperator
Author : Griffin Davis
Description : Overloads the insertion operator for the Complex class.
Created : 12/3/18
Modified : 12/7/18 
*/

#include "COMPLEXMATH.h"

using namespace std;

ostream& operator<< (ostream& lhs, const Complex& rhs){
   lhs << "(" << rhs.re << ", " << rhs.im << ")"; //Handles the printing of each component in (re, im) format
   return lhs;
}