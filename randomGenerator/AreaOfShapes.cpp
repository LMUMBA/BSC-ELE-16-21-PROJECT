#include <iostream>
#include <cmath> 
using namespace std;

// Function of computing the area of a square
double computeAreaOfSquare(double edge) {
    return edge * edge;
}


// Function of computing the area of a rectangle
double computeAreaOfRectangle(double length, double width) {
    return length * width;
}

// Function of computing the area of a triangle
double computeAreaOfTriangle(double base, double height) {
    return 0.5 * base * height;
}


int main() {
    char option;
    bool quit = false;
            // select the shape which need to compute
    while (!quit) {
        cout << "select shape to compute area:\n";
        cout << "1. Rectangle\n";
        cout << "2. Square\n";
        cout << "3. Triangle\n";
        cout << "Enter your option (1-3): ";
        cin >> option;
        
        switch (option) {
                //if 1 for rectangle
            case '1': // Rectangle
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of Rectangle: " << computeAreaOfRectangle(length, width) << endl;
                break;
                    // if 2 for square
            case '2': // Square
                double edge;
                cout << "Enter the edge square length: ";
                cin >> edge;
                cout << "Area of Square: " << computeAreaOfSquare(edge) << endl;
                break;

                    //if 3 for triangle
            case '3': // Triangle
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of Triangle: " << computeAreaOfTriangle(base, height) <<endl;
                break;

            default:
                cout << "Invalid option. Please enter a valid option from (1-3)." << endl;
                break;
        }

        // Ask if the user wants to continue computing another shape
        char continueOption;
        cout << "Do you want to compute another shape? (y/n): ";
        cin >> continueOption;
        if (continueOption != 'y' && continueOption != 'Y') {
            quit = true;
        }
    }

    cout << "Thank you for using the area calculator program!" << endl;
    return 0;
}