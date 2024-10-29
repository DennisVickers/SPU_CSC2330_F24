#include <iostream>

class Engine {
public:
    void start() {
        std::cout << "Engine started.\n";
    }
};

class Wheels {
public:
  void roll() {
    std::cout << "Wheels rolling.\n";
  }
};

class Auto : public Engine, public Wheels {
  // inherits from both Engine and Wheels
};
