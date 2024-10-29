#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
  // Creating complex numbers
  Complex c1(3, 4); // 3 + 4i
  Complex c2(1, -2); // 1 - 2i

  // Adding complex numbers using the overloaded + operator
  Complex sum = c1 + c2;
  cout << "Sum: " << sum << endl;

  // Multiplying complex numbers using the overloaded * operator
  Complex product = c1 * c2;
  cout << "Product: " << product << endl;

  return 0;
}