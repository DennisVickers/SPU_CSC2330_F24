#include "Rectangle.h"

int main() {
    // Using default constructor
    Rectangle rect1;
    rect1.displayDetails();

    cout << endl;

    // Using parameterized constructor
    Rectangle rect2(5.0, 3.5);
    rect2.displayDetails();

    cout << endl;

    // Modifying using setters
    rect1.setLength(7.5);
    rect1.setWidth(4.2);
    cout << "After setting dimensions:\n";
    rect1.displayDetails();

    cout << endl;

    // Using copy constructor
    Rectangle rect3 = rect2;
    rect3.displayDetails();

    cout << endl;

    // Ending the program (destructors will be called automatically)
    cout << "End of program.\n";

    return 0;
}
