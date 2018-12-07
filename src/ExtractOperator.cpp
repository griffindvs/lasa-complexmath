#include "COMPLEXMATH.h"

using namespace std;

void operator>> (istream& lhs, Complex c){

   string a;
   lhs >> a;

   int comma = a.find(',');
   double real;
   double imag;

   if (comma != -1) {
      real = atof(a.substr(1, comma-1).c_str());
      imag = atof(a.substr(comma+1, a.length()-comma-2).c_str());
   } else {
      real = atof(a.c_str());
      imag = 0;
   }
   Complex output = (real, imag);
   c = output;
}
