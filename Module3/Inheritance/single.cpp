#include <iostream>

class Vehicle {
public:
   void move() {
      std::cout << "Moving...\n";
    }
};

class Car : public Vehicle {
   // Car class inherits Vehicle's properties and behaviors
};