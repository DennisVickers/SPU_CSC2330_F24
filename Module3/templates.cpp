#include <iostream>
#include <string>
using namespace std;

// Function template to find the maximum of two values
template <typename T>
T findMax(T a, T b) {
   return (a > b) ? a : b;
}

// Class template to create a generic Box
template <typename T>
class Box {
private:
   T content;

public:
   // Constructor
   Box(T value) : content(value) {}

   // Function to get the content
   T getContent() const {
      return content;
   }

   // Function to set the content
   void setContent(T value) {
      content = value;
   }
};

int main() {
   // Demonstrate the function template
   int maxInt = findMax(10, 20);
   double maxDouble = findMax(5.5, 2.3);
   string maxString = findMax<string>("apple", "banana");   // explicit type specification

   cout << "Function Template Example:\n";
   cout << "Max of 10 and 20: " << maxInt << endl; // int type
   cout << "Max of 5.5 and 2.3: " << maxDouble << endl; // double type
   cout << "Max of 'apple' and 'banana': " << maxString << endl; // string type

   /* Demonstrate the class template */
   cout << "\nClass Template Example:" << endl;

   // Box with an integer
   Box<int> intBox(42);
   cout << "Box contains integer: " << intBox.getContent() << endl;

   // Box with a string
   Box<string> stringBox("Hello, Templates!");
   cout << "Box contains string: " << stringBox.getContent() << endl;

   // Modify the content of stringBox
   stringBox.setContent("Updated Content");
   cout << "Box contains updated string: " << stringBox.getContent() << endl;

   return 0;
}
