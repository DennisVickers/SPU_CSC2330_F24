#include <iostream>
#include <cmath>  // For M_PI (the value of π)

using namespace std;

// Function declaration
double calculateCircleArea(double radius);    // Function to calculate area of a circle
int findMax(int a, int b);                    // Function to find maximum of two numbers
void greet(string name);                      // Function to print a greeting message
void swap(int &a, int &b);                    // Function to swap two numbers using pass-by-reference
int factorial(int n);                         // Recursive function to calculate factorial

int main() {
   // Example 1: Calculate area of a circle
   double radius;
   cout << "Enter radius of the circle: ";
   cin >> radius;
   cout << "Area of the circle: " << calculateCircleArea(radius) << endl;

   // Example 2: Find the maximum of two numbers
   int x, y;
   cout << "Enter two integers: ";
   cin >> x >> y;
   cout << "The maximum of " << x << " and " << y << " is: " << findMax(x, y) << endl;

   // Example 3: Print a greeting message
   string name;
   cout << "Enter your name: ";
   cin >> name;
   greet(name);

   // Example 4: Swap two numbers using pass-by-reference
   cout << "Enter two numbers to swap: ";
   cin >> x >> y;
   cout << "Before swapping: x = " << x << ", y = " << y << endl;
   swap(x, y);
   cout << "After swapping: x = " << x << ", y = " << y << endl;

   // Example 5: Calculate factorial using recursion
   int num;
   cout << "Enter a number to calculate its factorial: ";
   cin >> num;
   cout << "Factorial of " << num << " is: " << factorial(num) << endl;

   return 0;
}

// Function definitions

// Function to calculate area of a circle
double calculateCircleArea(double radius) {
   return M_PI * radius * radius;  // M_PI is the value of π
}

// Function to find the maximum of two numbers
int findMax(int a, int b) {
   return (a > b) ? a : b;
}

// Function to print a greeting message
void greet(string name) {
   cout << "Hello, " << name << "! Welcome to the C++ functions demo." << endl;
}

// Function to swap two numbers using pass-by-reference
void swap(int &a, int &b) {
   int temp = a;
   a = b;
   b = temp;
}

// Recursive function to calculate the factorial of a number
int factorial(int n) {
   if (n <= 1) {
      return 1;
   } else {
      return n * factorial(n - 1);
   }
}
