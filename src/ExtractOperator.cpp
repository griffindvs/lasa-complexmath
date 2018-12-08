#include "COMPLEXMATH.h"

using namespace std;

istream& operator>> (istream& lhs, Complex& c){
   string a;
   lhs >> a;
   cout << "a: " << a << endl;
   double re;
   double im;
   int i = a.find(',');
   re = atof(a.substr(1,i-1).c_str());
   im = atof(a.substr(i+1, a.length()-2-i).c_str());

   cout << "Found" << endl;

   Complex b(re,im);
   cout << "Made b: " << b << endl;

   c = b;
   cout << "Set c: " << b << endl;
   return lhs;
}
