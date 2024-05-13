#include <iostream>
using namespace std;

int main() {
    const int maxRows = 3; // Maximum number of rows
    const int maxCols = 3; // Maximum number of columns

    // Declare a 2D array of doubles
    double myArray[maxRows][maxCols];

    // Prompt the user for input and assign values
    for (int row = 0; row < maxRows; ++row) {
        for (int col = 0; col < maxCols; ++col) {
            cout << "Enter a value for element at row " << row + 1
                      << ", column " << col + 1 << ": ";
            cin >> myArray[row][col];
        }
    }

    // Output the values of each element
    cout << "Values of the 2D array:" << endl;
    for (int row = 0; row < maxRows; ++row) {
        for (int col = 0; col < maxCols; ++col) {
            cout << "Element at row " << row + 1
                      << ", column " << col + 1 << ": "
                      << myArray[row][col] << endl;
        }
    }
}