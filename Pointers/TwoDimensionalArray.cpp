#include <iostream>
using namespace std;

int main() {
    int maxRows, maxCols;
    

    // Prompt the user for input and assign values
    cout << "Enter the number of of rows(not more tha 3 rows): " ;
    cin >> maxRows;
    cout << "Enter the number of cols (not more than 3 cols): " ;
    cin >> maxCols;
     if(maxRows > 3 || maxCols > 3){
            cout<< "dimensions must not exceed 3, Try again," << endl;
            return 1;
    
    }
     double** myArray = new double*[maxRows];
    for (int row = 0; row < maxRows; ++row) {
        for (int col = 0; col < maxCols; ++col) {
            cout << "Enter a value for element at row ["<< row <<"]["<<col <<"]: ";
            cin >> myArray[row][col];
       
        }
        }
    
    // Output the values of each element
    cout << "Values of the 2D array:" << endl;
    for (int row = 0; row < maxRows; ++row) {
        for (int col = 0; col < maxCols; ++col) {
            cout << myArray[row][col] << " " ;
        }
                cout << endl;
    }
                for (int row = 0; row < maxRows; ++row) {
                    delete[] myArray[maxRows];
                }
                    delete[] myArray;
                return 0;
    }