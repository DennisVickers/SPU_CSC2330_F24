#include <iostream>

class Shelter {
public:
  void access() {
    std::cout << "Door\n";
  }
};

class Tent : public Shelter {
public:
  void access() {
    std::cout << "Flap\n";  // Overrides Shelter's access()
  }
};
