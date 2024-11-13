#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable and initialize it
    int num = 42;
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;

    // Declare a pointer to an integer variable and initialize it to the address of num
    int* ptr = nullptr;
    *ptr = num;
    cout << "Value of pointer (address of num): " << ptr << endl;
    cout << "Value pointed to by ptr (value of num): " << *ptr << endl;

    // Modify the value of num using the pointer
    *ptr = 58;
    cout << "New value of num after modifying through ptr: " << num << endl;

    // Dynamically allocate memory using pointers
    int* dynamicPtr = new int;
    *dynamicPtr = 100;
    cout << "Value stored in dynamically allocated memory: " << *dynamicPtr << endl;
    cout << "Value of dynamic memory: " << dynamicPtr << endl;

    // Free dynamically allocated memory
    delete dynamicPtr;

    // Working with arrays
    int arr[3] = {10, 20, 30};
    int* aPtr = arr;
    cout << *(aPtr + 1) << endl;

    // Deallocate array
   int* dPtr = new int[3];
   delete[] dPtr;

   // Pointers to Pointers
   int** doublePtr = &ptr;
   cout << "Address stored in doublePtr (address of ptr): " << doublePtr << endl;
   cout << "Value pointed to by doublePtr (address of num): " << *doublePtr << endl;
   cout << "Value at the address pointed to by doublePtr (valule of num): " << **doublePtr << endl;


    return 0;
}

