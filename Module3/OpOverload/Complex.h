#pragma once

#include <iostream>
using namespace std;

class Complex {
private:
  double real;
  double imag;

public:
  // // Constructor
  // Complex(double r = 0, double i = 0);
  // Constructor
  Complex(double r, double i) : real(r), imag(i) {};

  // Overloaded + operator to add two complex numbers
  Complex operator+(const Complex &other) const;

  // Overloaded * operator to multiply two complex numbers
  Complex operator*(const Complex &other) const;

  // Friend function to overload the << operator for output
  friend ostream& operator<<(ostream &out, const Complex &c);
};
