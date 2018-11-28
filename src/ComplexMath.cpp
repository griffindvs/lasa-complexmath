#include "ComplexMath.h"

using namespace std;

Complex::Complex() {
	re = 0.0;
	im = 0.0;
}

Complex::Complex(double r, double i = 0.0) {
	re = r;
	im = i;
}