#include <iostream>
using namespace std;

int main() {
    int choice;

    // Display the menu
    cout << "Menu:" << endl;
    cout << "1. Check if a number is positive or negative" << endl;
    cout << "2. Print the day of the week" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Branching using if, if-else, and switch
    if (choice == 1) {
        // Checking if a number is positive or negative
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num > 0) {
            cout << num << " is positive." << endl;
        } else if (num < 0) {
            cout << num << " is negative." << endl;
        } else {
            cout << "The number is zero." << endl;
        }

    } else if (choice == 2) {
        // Printing the day of the week using switch
        int day;
        cout << "Enter a number (1-7) to represent a day of the week: ";
        cin >> day;

        switch (day) {
            case 1:
                cout << "Monday" << endl;
                break;
            case 2:
                cout << "Tuesday" << endl;
                break;
            case 3:
                cout << "Wednesday" << endl;
                break;
            case 4:
                cout << "Thursday" << endl;
                break;
            case 5:
                cout << "Friday" << endl;
                break;
            case 6:
                cout << "Saturday" << endl;
                break;
            case 7:
                cout << "Sunday" << endl;
                break;
            default:
                cout << "Invalid day!" << endl;
                break;
        }

    } else if (choice == 3) {
        // Exit option
        cout << "Exiting the program." << endl;

    } else {
        // Invalid choice
        cout << "Invalid choice! Please select a valid option." << endl;
    }

    return 0;
}
