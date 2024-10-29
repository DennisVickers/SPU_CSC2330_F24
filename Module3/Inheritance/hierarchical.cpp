#include <iostream>
#include <string>

class Shape {
public:
  void draw() {
    std::cout << "Drawing shape ";
  }
};

class Circle : public Shape {
// Circle inherits from Shape
private:
  std::string shapeType;
public:
  Circle() : shapeType("Circle") {};
  std::string GetType() {return shapeType;};
};

class Square : public Shape {
private:
  std::string shapeType;
public:
  Square() : shapeType("Square") {};
  std::string GetType() {return shapeType;};
};