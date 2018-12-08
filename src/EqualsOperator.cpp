#include "COMPLEXMATH.h"
using namespace std;

Complex& Complex:: operator= (const Complex& rhs){

  this->re=rhs.re;
  this->im=rhs.im;
  return *this;
}
