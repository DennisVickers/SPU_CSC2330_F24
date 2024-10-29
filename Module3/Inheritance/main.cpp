#include <iostream>
#include "single.cpp"
#include "multiple.cpp"
#include "leveled.cpp"
#include "hierarchical.cpp"
#include "override.cpp"
#include "virt.cpp"
using namespace std;

int main() {
  // Single Inheritance
  cout << "\nSingle Inheritance\n";
  Car myCar;
  myCar.move();

  // Multiple Inheritance
  cout << "\nMultiple Inheritance\n";
  Auto myAuto;
  myAuto.start();
  myAuto.roll();

  // Leveled Inheritance
  cout << "\nLeveled Inheritance\n";
  Dog myDog;
  myDog.breathe();
  myDog.eat();

  // Hierarchial Inheritance
  cout << "\nHierarchial Inheritance\n";
  Circle myCircle;
  Square mySquare;
  myCircle.draw();
  cout << myCircle.GetType() << endl;
  mySquare.draw();
  cout << mySquare.GetType() << endl;

  // Overriding functions
  cout << "\nOverriding Functions\n";
  Tent myTent;
  myTent.access();

  // Virtual functions
  cout << "\nVirtual Functions\n";
  Animals* animals = new Cat();
  animals->speak();   // Outputs "Meow!" because of virual function

  return 0;
}