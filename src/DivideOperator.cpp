/*
Title: DivideOperator
Author: TJ Arora
Description: operator overload of / for complex numbers
Created: 12/7/18
Modified: 12/10/18
*/
#include "COMPLEXMATH.h"

using namespace std;

Complex Complex::operator/ (const Complex& rhs) {
    Complex finalComplex;

    double divisor = (rhs.re * rhs.re) + (rhs.im * rhs.im);//distribution and simplification of denominator after being multiplied by conjugate
    //distribution and simplification of numerator
    double num_re = (this->re * rhs.re) + (this->im * rhs.im);
    double num_img = (this->im * rhs.re) - (this->re * rhs.im);

    finalComplex.re = num_re/divisor;
    finalComplex.im = num_img/divisor;
    return finalComplex;
}
