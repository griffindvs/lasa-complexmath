#include "src/COMPLEXMATH.h"

using namespace std;

int main ()
{
   cout << "Hello World" << endl;

   //======Personal Tests======
//    cout << "Personal Tests:" << endl;
//    cout << "Running cin: " << endl;
//    Complex input;
//    cin >> input;
//    cout << "input: " << input << endl;
//    Complex griffin(1.0,2.0);
//    Complex taka(3.0,4.0);
//    cout << "griffin= " << griffin << endl;
//    cout << "taka= " << taka << endl;
//    cout << "g+t= " << griffin + taka << endl;
//    cout << "g-t= " << griffin - taka << endl;
//    cout << "g*t= " << griffin * taka << endl;
//    cout << "g/t= " << griffin / taka << endl;
//    cout << "abs(g)= " << abs(griffin) << endl;
//    cout << "arg(g)= " << arg(griffin) << endl;
//    cout << "conj(g)= " << conj(griffin) << endl;
//    cout << "norm(g)= " << norm(griffin) << endl;
//    cout << "imag(g)= " << imag(griffin) << endl;
//    cout << "real(g)= " << real(griffin) << endl;
//    cout << "Input a character and press enter to continue..." << endl;
//    int pause;
//    cin >> pause;
   //====End Personal Tests====

  Complex a(5.0,6.0),b;

  cout << "Enter b: ";
  cin >> b;

  cout << "a = " << a << "\n";
  cout << "b = " << b << "\n";

  cout << "a + b = " << a + b << "\n";
  cout << "a - b = " << a - b << "\n";
  cout << "a * b = " << a * b << "\n";
  cout << "a / b = " << a / b << "\n";
  cout << "|a| = "   << abs(a) << "\n";
  cout << "complex conjugate of a = " << conj(a) << "\n";
  cout << "norm of a = " << norm(a) << "\n";
  cout << "abs of a = " << abs(a) << "\n";
  //cout << "exp(a) = " << exp(a) << "\n";

  cout << "Group Tests:" << "\n";
  cout << "Arg of a = " << arg(a) << endl;
  cout << "Imag of a = " << imag(a) << endl;
  cout << "Real of a = " << real(a) << endl;

      cout << "Input a character and press enter to continue..." << endl;
      int pause;
      cin >> pause;

   /*
    _Complex j = _Complex(0.0,1.0);
    _Complex z1 = 1+2*j;
    _Complex z2 = 2+3*j;

    z1 += z2;
   / *
    cout << "Complex number example: " << z1 << endl;
    cout << "The conjugate is: " << z1.conj() << endl;
    cout << "The magnitude is: " << z1.abs() << endl;
    cout << "The phase in Radians is: " << z1.arg() << endl;
    cout << "The norm is: " << z1.norm() << endl;
    cout << "The sqrt is: " << sqrt(z1) << endl;
    cout << "The natural log is: " << log(z1) << endl;
    cout << "The sin is: " << sin(z1) << endl;
    cout << "The acosh is: " << acosh(z1) << endl;
    cout << "Rounded to 2 decimal places: " << acosh(z1).rnd(2) << endl;
     */

}
