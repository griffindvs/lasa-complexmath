#include <iostream>

Complex Complex::operator/ (const Complex& rhs) const
{
    Complex finalComplex;

    double divisor = (rhs.re * rhs.re) + (rhs.im * rhs.im);
    double num_re = (this->re * rhs.re) + (this->im * rhs.im);
    double num_img = (this->im * rhs.re) - (this->re * rhs.im);

    finalComplex.re = num_re/divisor;
    finalComplex.im = num_img/divisor;
    return finalComplex;
}