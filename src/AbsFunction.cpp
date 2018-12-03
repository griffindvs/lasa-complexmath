/*
AbsFunction
Travis Eaves
Created 12/3/18
Desc: absolute value function for complex numbers
Modified: 12/3/18
*/
#include "ComplexMath.h"
#include <cmath>
using namespace std;

double Complex::abs()
   {
      double magnitude;
      magnitude = sqrt((this->re)*(this->re) + (this->im)*(this->im));
      return magnitude;
   }