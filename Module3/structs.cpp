#include <iostream>
#include <string>
using namespace std;

// Define a struct named Student
struct Student {
   string name;        // Name of the student
   int stuId;          // Student ID
   string major;       // Student's major
};

int main() {
   // Declare and initialize a Student struct
   Student student1;
   student1.name = "Alice Johnson";
   student1.stuId = 202020;
   student1.major = "Computer Science";

   // Print the details of student1
   cout << "Student 1 Details:\n";
   cout << "Name: " << student1.name << endl;
   cout << "SID: " << student1.stuId << endl;
   cout << "Major: " << student1.major << endl;

   // Create another Student struct and initialize using aggregate initialization
   Student student2 = {"Bob Smith", 303030, "Electrical Engineering"};

   // Print the details of student2
   cout << "\nStudent 2 Details:\n";
   cout << "Name: " << student2.name << endl;
   cout << "SID: " << student2.stuId << endl;
   cout << "Major: " << student2.major << endl;

   // Input details for a new student
   Student student3;
   cout << "\nEnter details for Student 3:\n";
   cout << "Name: ";
   cin.ignore(); // Clear the input buffer
   getline(cin, student3.name);
   cout << "SID: ";
   cin >> student3.stuId;
   cout << "Major: ";
   cin.ignore();
   getline(cin, student3.major);

   // Print the details of student3
   cout << "\nStudent 3 Details:" << endl;
   cout << "Name: " << student3.name << endl;
   cout << "SID: " << student3.stuId << endl;
   cout << "Major: " << student3.major << endl;

   return 0;
}
