#include "ComplexMath.h"
#include "COMPLEXMATH.h"
#include <string>
#include <stdlib.h>

using namespace std;

Complex operator>> (istream& lhs, string input){
   int comma = input.find(',');
   double real;
   double imag;
   
   if (comma != -1) {
      real = atof(input.substr(1, comma-1).c_str());
      imag = atof(input.substr(comma+1, input.length()-comma-2).c_str());
   } else {
      real = atof(input.c_str());
      imag = 0;
   }
   Complex output = (real, imag);
   return output;
}