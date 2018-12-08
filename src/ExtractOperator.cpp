#include "COMPLEXMATH.h"

using namespace std;

istream& operator>> (istream& lhs, Complex& c){
   if (c.im) {
      lhs >> c.re >> c.im;
   } else {
      lhs >> c.re;
   }
   return lhs;
}
