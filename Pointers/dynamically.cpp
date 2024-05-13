#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int; // Allocating memory for an integer and storing its address in dynamicInt
    cout << "Enter an integer value: ";
    cin >> *dynamicInt; // Assigning a value to the dynamically allocated integer

    // Dynamically allocate a character
    char* dynamicChar = new char; // Allocating memory for a character and storing its address in dynamicChar
    cout << "Enter a character: ";
    cin >> *dynamicChar; // Assigning the character input to the dynamically allocated char

    // Dynamically allocate a string
    string* dynamicString = new string; // Allocating memory for a string and storing its address in dynamicString
    cout << "Enter a string: ";
    cin.ignore(); // Clear the newline character from the input buffer
    getline(cin, *dynamicString); // Assigning a string value to the dynamically allocated string

    // Display the values
    cout << "Dynamically allocated integer: " << *dynamicInt << endl;
    cout << "Dynamically allocated character: " << *dynamicChar << endl;
    cout << "Dynamically allocated string: " << *dynamicString << endl;

    
    return 0;
}