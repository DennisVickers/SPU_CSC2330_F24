#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
   // Define the file streams for input and output with modes
   ifstream fileIn("input.txt", ios::in);   // Open in read mode
   ofstream fileOut("output.txt", ios::out | ios::trunc); // Open in write mode, truncates if exists

   // Check if input file opened successfully
   if (fileIn.fail()) {
     cerr << "Error opening input file\n";
     return 1;
   }

   // Check if output file opened successfully
   if (fileOut.fail()) {
     cerr << "Error opening output file\n";
     return 1;
   }

   // Array Initialization (Fixed size, assumes 5 integers in the file)
   const int arraySize = 5;
   int arr[arraySize] = {0}; // Initialize with zeros

   cout << "Reading integers from file and storing in array and vector:\n";
   for (int i = 0; i < arraySize; i++) {
     if (!(fileIn >> arr[i])) {  // Check for read errors or EOF
       cerr << "Error reading data for array or insufficient data\n";
       return 1;
     }
     cout << "Array[" << i << "] = " << arr[i] << "\n";
   }

   // Reset the file input stream to the beginning for vector use
   fileIn.clear();
   fileIn.seekg(0, ios::beg);

   // Vector Initialization (Dynamic size)
   vector<int> vec;
   int value;
   while (fileIn >> value) {
     vec.push_back(value); // Add each value to the vector
   }

   // Check for file read errors
   if (fileIn.bad()) {
     cerr << "Irrecoverable error reading input file\n";
     return 1;
   }
   if (fileIn.eof()) {
      cout << "End of file reached for vector reading\n";
   }

   cout << "\nValues in vector:\n";
   for (size_t i = 0; i < vec.size(); i++) {
     cout << "Vector[" << i << "] = " << vec[i] << "\n";
   }

   // Perform some operations on array and vector
   arr[0] = 100;           // Modify first element in array
   vec[0] = 200;           // Modify first element in vector

   // Output modified array and vector to output file
   fileOut << "Modified Array:\n";
   for (int i = 0; i < arraySize; i++) {
     fileOut << arr[i] << " ";
   }
   fileOut << "\nModified Vector:\n";
   for (size_t i = 0; i < vec.size(); i++) {
     fileOut << vec[i] << " ";
   }
   fileOut << endl;

   // Check for file write errors
   if (fileOut.fail()) {
     cerr << "Error writing to output file\n";
     return 1;
   }

   // Close files
   fileIn.close();
   fileOut.close();

   cout << "\nData has been processed and written to output.txt\n";
   return 0;
}
