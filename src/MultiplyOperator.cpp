/*
MultipyOperator
Travis Eaves
Created: 11/28/18
Desc: operator overload of * for complex multiplication
Modified 12/3/18
*/
#include <ComplexMath.h>

Complex::operator* (Complex* factor)
   {
      Complex product;
      product.re = (this->re * factor->re) + (-1 * (this->im * factor->im));
      product.im = (this->re * factor->im) + (this->im * factor->re);
      return product;
   }