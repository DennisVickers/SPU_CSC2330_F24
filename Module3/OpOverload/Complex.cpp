#include "Complex.h"

/*
 * "this" points to the left-hand operand (e.g., c1 in c1 + c2)
 * "rho" is the right-hand operand (e.g., c2 in c1 + c2)
 */

// Overloaded + operator
Complex Complex::operator+(const Complex& rho) const {
  return Complex(this->real + rho.real, this->imag + rho.imag);
}

// Overloaded * operator
Complex Complex::operator*(const Complex& rho) const {
  return Complex((this->real * rho.real - this->imag * rho.imag),
                 (this->real * rho.imag + this->imag * rho.real));
}

// Overloaded << operator for output
// This is a Friend function. Notice there is no resolution (::) operator
ostream& operator<<(ostream& out, const Complex& c) {
  out << c.real << (c.imag >= 0 ? " + " : " - ") << abs(c.imag) << "i";
  return out;
};
