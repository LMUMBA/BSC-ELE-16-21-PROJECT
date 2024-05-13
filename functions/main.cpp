#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // Create an instance of Rectangle
    Rectangle rectangle;

    // Get length and width from user input
    float length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    // Set length and width using accessor methods
    rectangle.setLength(length);
    rectangle.setWidth(width);

    // Calculate and output area
    float area = rectangle.calculateArea();
    cout << "Area of rectangle: " << area <<endl;

    return 0;
}

