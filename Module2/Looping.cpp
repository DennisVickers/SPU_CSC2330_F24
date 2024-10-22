#include <iostream>
using namespace std;

int main() {
   int choice;

   do {
      // Display the menu
      cout << "\n=== Loop Demonstration Menu ===\n";
      cout << "1. Print numbers from 1 to 5 using a For Loop\n";
      cout << "2. Print numbers from 1 to 5 using a While Loop\n";
      cout << "3. Print numbers from 1 to 5 using a Do-While Loop\n";
      cout << "4. Print numbers from an array using a Range-Based For Loop\n";
      cout << "5. Exit\n";
      cout << "Enter your choice (1-5): ";
      cin >> choice;

      int i;
      int arr[] = {1, 2, 3, 4, 5};
      switch (choice) {
         case 1:   // 1. For Loop: Prints numbers from 1 to 5
            cout << "For Loop:\n";
            for (int i = 1; i <= 5; i++) {
               cout << i << " ";
            }
            cout << endl;
            break;
         case 2:   // 2. While Loop: Prints numbers from 1 to 5
            cout << "While Loop:\n";
            i = 1;
            while (i <= 5) {
               cout << i << " ";
               i++;
            }
            cout << endl;
            break;
         case 3:   // 3. Do-While Loop: Prints numbers from 1 to 5
            cout << "Do-While Loop:\n";
            i = 1;
            do {
               cout << i << " ";
               i++;
            } while (i <= 5);
            cout << endl;
            break;
         case 4:   // 4. Range-Based For Loop: Prints numbers from an array
            cout << "Range-Based For Loop:\n";
            for (int eVal : arr) {
               cout << eVal << " ";
            }
            cout << endl;
            break;
         case 5:   // Exit option
            cout << "Exiting the program. Goodbye!\n";
            break;
         default:
            cout << "Invalid choice! Please select a valid option." << endl;
            break;
        }

    } while (choice != 5);  // Keep showing the menu until the user chooses to exit

    return 0;
}
