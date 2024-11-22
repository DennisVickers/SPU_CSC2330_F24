#include <iostream>

class Animals {
public:
   virtual void speak() {
     std::cout << "Animal sound\n";
   }
};

class Cat : public Animals {
public:
   void speak() override {  // Overrides the virtual function
     std::cout << "Meow!\n";
   }
};
