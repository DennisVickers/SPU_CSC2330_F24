#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructors and Destructor
    Rectangle();
    Rectangle(double l, double w);
    Rectangle(const Rectangle& rect);
    ~Rectangle();

    // Setters
    void setLength(double l);
    void setWidth(double w);

    // Getters
    double getLength() const;
    double getWidth() const;

    // Helper functions
    double calculateArea() const;
    double calculatePerimeter() const;
    void displayDetails() const;
};

#endif
