#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() : length(0.0), width(0.0) {
    cout << "Default constructor called.\n";
}

// Parameterized constructor
Rectangle::Rectangle(double l, double w) : length(l), width(w) {
    cout << "Parameterized constructor called.\n";
}

// Copy constructor
Rectangle::Rectangle(const Rectangle& rect) : length(rect.length), width(rect.width) {
    cout << "Copy constructor called.\n";
}

// Destructor
Rectangle::~Rectangle() {
    cout << "Destructor called for Rectangle with length = " << length
         << " and width = " << width << ".\n";
}

// Setter for length
void Rectangle::setLength(double l) {
    if (l > 0)
        length = l;
    else
        cout << "Length must be positive.\n";
}

// Setter for width
void Rectangle::setWidth(double w) {
    if (w > 0)
        width = w;
    else
        cout << "Width must be positive.\n";
}

// Getter for length
double Rectangle::getLength() const {
    return length;
}

// Getter for width
double Rectangle::getWidth() const {
    return width;
}

// Helper function to calculate area
double Rectangle::calculateArea() const {
    return length * width;
}

// Helper function to calculate perimeter
double Rectangle::calculatePerimeter() const {
    return 2 * (length + width);
}

// Helper function to display details
void Rectangle::displayDetails() const {
    cout << "Rectangle Details:\n"
         << "Length: " << length << "\n"
         << "Width: " << width << "\n"
         << "Area: " << calculateArea() << "\n"
         << "Perimeter: " << calculatePerimeter() << "\n";
}
