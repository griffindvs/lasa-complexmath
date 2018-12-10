/*
Title : ExtractOperator
Author : Taka Koutsomitopoulos
Description : Overloads the extract operator to allow a (a,b) string to be parsed directly to a Complex object.
Created : 12/4/18
Modified : 12/10/18
*/

#include "COMPLEXMATH.h"

using namespace std;

istream& operator>> (istream& lhs, Complex& c){
   string input;
   lhs >> input; //Takes the inputted string in the form (a,b) and stores it into 'input'
   double re;
   double im;
   int i = input.find(',');
   re = atof(input.substr(1,i-1).c_str()); // Parses the input to find the double for 'a'
   im = atof(input.substr(i+1, input.length()-2-i).c_str()); // Parses the input to find the double for 'b'

   Complex parsedComplex(re,im);

   c = parsedComplex; // Sets the rhs Complex 'c' to a generated 'parsedComplex' made from the parsed string
   return lhs;
}
