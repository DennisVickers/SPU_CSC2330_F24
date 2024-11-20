#include <iostream>
#include <string>
using namespace std;

// Class definition
class Student {
private:
   // Private member variables (accessible only within the class)
   string name;
   int age;
   double grade;

public:
   // Default constructor
   Student() {
      name = "Unknown";
      age = 0;
      grade = 0.0;
      cout << "Default constructor called." << endl;
   }

   // Parameterized constructor
   Student(string n, int a, double g) {
      name = n;
      age = a;
      grade = g;
      cout << "Parameterized constructor called." << endl;
   }

   // Destructor
   ~Student() {
      cout << "Destructor called for student: " << name << endl;
   }

   // Public member function to display student details
   void displayInfo() const {
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
      cout << "Grade: " << grade << endl;
   }

   // Public member function to set student details
   void setDetails(string n, int a, double g) {
      name = n;
      age = a;
      grade = g;
   }

   // Accessor (getter) functions
   string getName() const {
      return name;
   }

   int getAge() const {
      return age;
   }

   double getGrade() const {
      return grade;
   }

   // Mutator (setter) functions
   void setName(string n) {
      name = n;
   }

   void setAge(int a) {
      age = a;
   }

   void setGrade(double g) {
      grade = g;
   }
};

int main() {
   // Creating an object using the default constructor
   Student student1;
   cout << "Student 1 details:" << endl;
   student1.displayInfo();

   // Setting details for student1
   student1.setDetails("Alice", 20, 89.5);
   cout << "\nUpdated Student 1 details:" << endl;
   student1.displayInfo();

   // Creating an object using the parameterized constructor
   Student student2("Bob", 22, 91.0);
   cout << "\nStudent 2 details:" << endl;
   student2.displayInfo();

   return 0;
}

