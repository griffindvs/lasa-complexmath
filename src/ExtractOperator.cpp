#include "COMPLEXMATH.h"

using namespace std;

istream& operator>> (istream& lhs, Complex& c){
   string a;
   lhs >> a;
   double re;
   double im;
   int i = a.find(',');
   re = atof(a.substr(1,i-1).c_str());
   im = atof(a.substr(i+1, a.length()-2-i).c_str());
   
   Complex b(re,im);
   c = b;
   
   return lhs;
}