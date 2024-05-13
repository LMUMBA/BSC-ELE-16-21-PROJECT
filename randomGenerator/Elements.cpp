#include <iostream>
#include <string>
using namespace std;
int main() {
    // Declare and initialize the array with the given string elements
    string texts[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Iterate through each element in the array
    for (const string& text : texts) {
        // Check if the element starts with the letter "B"
        if (text.front() == 'B') {
            // Output the element of the array to the console
            cout << "Element starting with 'B': " << text <<endl;
        }
    }

    return 0;
}