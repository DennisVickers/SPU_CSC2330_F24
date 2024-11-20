#include <iostream>
using namespace std;

// Rectangle class
class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle() : length(0.0), width(0.0) {
        cout << "Default constructor called.\n";
    }

    // Parameterized constructor
    Rectangle(double l, double w) : length(l), width(w) {
        cout << "Parameterized constructor called.\n";
    }

    // Copy constructor
    Rectangle(const Rectangle& rect) : length(rect.length), width(rect.width) {
        cout << "Copy constructor called.\n";
    }

    // Destructor
    ~Rectangle() {
        cout << "Destructor called for Rectangle with length = " << length
             << " and width = " << width << ".\n";
    }

    // Setter for length
    void setLength(double l) {
        if (l > 0)
            length = l;
        else
            cout << "Length must be positive.\n";
    }

    // Getter for length
    double getLength() const {
        return length;
    }

    // Setter for width
    void setWidth(double w) {
        if (w > 0)
            width = w;
        else
            cout << "Width must be positive.\n";
    }

    // Getter for width
    double getWidth() const {
        return width;
    }

    // Helper function to calculate area
    double calculateArea() const {
        return length * width;
    }

    // Helper function to calculate perimeter
    double calculatePerimeter() const {
        return 2 * (length + width);
    }

    // Helper function to display details
    void displayDetails() const {
        cout << "Rectangle Details:\n"
             << "Length: " << length << "\n"
             << "Width: " << width << "\n"
             << "Area: " << calculateArea() << "\n"
             << "Perimeter: " << calculatePerimeter() << "\n";
    }
};

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
