#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int a = 10;
   int b = 5;

   // Basic math
   int r1 = a + b * 2 - 3;
   cout << "Basic: " << r1 << endl;

   // Compound
   int r2 = (a + b) * 2 - 3;
   cout << "Compound: " << r2 << endl;

   // Logical and Relational:
   bool comparison = (a > 5) && (b < 10);  // What is the result?
   cout << "Logical and Relational: " << comparison << endl;

   // Using Functions:
   int fx = sqrt(16) + pow(2, 3);
   cout << "Function calls: " << fx << endl;
   
   // Modulo
   int r3 = (a + 3) % b;
   cout << "Modulo: " << r3 << endl;
   
   // Integer math
   double r4 = b / a;
   cout << "Integer math: " << r4 << endl;
   r4 = b / static_cast<double>(a);
   cout << "Integer math: " << r4 << endl;
   

   return 0;
}
