/* 
Title : ArgFunction
Author : Griffin Davis
Description : Returns the angle of the Complex number.
Created : 12/3/18
Modified : 12/8/18 
*/

#include "COMPLEXMATH.h"

using namespace std;

double arg(Complex c){
   double y, x;
   y = c.im; //Sets temporary value for imaginary component
   x = c.re; //Sets temporary value for real component

   double angle;
   angle = atan(y/x); //Calculates the arctangent of the imaginary/real
   return angle; //Returns the calculated angle
}
