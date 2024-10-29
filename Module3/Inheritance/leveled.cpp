#include <iostream>

class Animal {
public:
  void eat() {
    std::cout << "Eating...\n";
  }
};

class Mammal : public Animal {
public:
  void breathe() {
    std::cout << "Breathing...\n";
  }
};

class Dog : public Mammal {
    // Dog inherits from Mammal, which in turn inherits from Animal
};