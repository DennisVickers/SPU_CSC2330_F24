#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstName;
   string lastName;

   // Input from the user
   cout << "Enter your first name: ";
   cin >> firstName;

   cout << "Enter your last name: ";
   cin >> lastName;

   // Concatenate strings
   string fullName = firstName + " " + lastName;

   // Output the full name and its length
   cout << "Your full name is: " << fullName << std::endl;
   cout << "It has " << fullName.length() << " characters.\n";

   return 0;
}
