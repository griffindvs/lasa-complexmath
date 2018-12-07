#include "COMPLEXMATH.h"

using namespace std;

Complex Complex::operator* (Complex& rhs){
   Complex product;
   product.re = (this->re * rhs.re) + (-1 * (this->im * rhs.im));
   product.im = (this->re * rhs.im) + (this->im * rhs.re);
   return product;
}
