#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   // Declare variables of type Boolean (enum)
   bool A, B;
   bool validInput;
   string tempA, tempB;

   // Get user input for A
   validInput = false;
   do {
      cout << "Enter the value for A (0 for FALSE, 1 for TRUE): ";
      cin >> tempA;
      if (!tempA.empty() && (isdigit(tempA.at(0)) && (tempA.at(0) == '0' || tempA.at(0) == '1'))) {
         A = (tempA.at(0)=='1');
         validInput = true;
      } else {
         cout << "Invalid input. Try again.\n";
      }
   } while (!validInput);

   // Get user input for B
   validInput = false;
   do {
      cout << "Enter the value for B (0 for FALSE, 1 for TRUE): ";
      cin >> tempB;
      if (!tempB.empty() && (isdigit(tempB.at(0)) && (tempB.at(0) == '0' || tempB.at(0) == '1'))) {
         B = (tempB.at(0)=='1');
         validInput = true;
      } else {
         cout << "Invalid input. Try again.\n";
      }
   } while (!validInput);

   cout << "A is " << ((A)?"TRUE":"FALSE") << endl;
   cout << "B is " << ((B)?"TRUE":"FALSE") << endl;

   // Using AND (&&) operator
   cout << "\nLogical AND (&&) Operator:\n";
   cout << " A AND B IS ";
   cout << ((A && B)?"TRUE":"FALSE") << endl;

   // Using OR (||) operator
   cout << "\nLogical OR (||) Operator:\n";
   cout << " A OR B IS ";
   cout << ((A || B)?"TRUE":"FALSE") << endl;

   // Using NOT (!) operator
   cout << "\nLogical NOT (!) Operator:\n";
   cout << "!A IS ";
   cout << ((!A)?"TRUE":"FALSE") << endl;
   cout << "!B IS ";
   cout << ((!B)?"TRUE":"FALSE") << endl;

//    // Using NOT (!) operator
//    cout << "\nLogical NOT (!) Operator:" << endl;
//    cout << "!A = " << ((!A)?"TRUE":"FALSE") << endl;  // NOT operation
//    cout << "!B = " << ((!B)?"TRUE":"FALSE") << endl;
//
//    // Compound logical operations
//    cout << "\nCompound Logical Operations:" << endl;
//    cout << "!(A && B) = " << !(A && B) << endl;  // NOT(AND)
//    cout << "A || (A && B) = " << (A || (A && B)) << endl;  // OR with AND
//    cout << "(A && B) || (!B) = " << ((A && B) || (!B)) << endl;  // AND with NOT

    return 0;
}
