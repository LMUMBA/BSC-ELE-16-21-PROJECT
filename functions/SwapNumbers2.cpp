#include <iostream>
using namespace std;

// Function to swap two integers using pointers
void SwapNumbers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int VarA =25; 
    int VarB =100;

    cout << "\nBefore swap: " << VarA <<endl;
    cout << "\nBefore swap: " << VarB <<endl;
    SwapNumbers(&VarB, &VarA); // Pass addresses of VarA and VarB

    cout << "After swap: " << VarA <<endl;
    cout << "After swap: " << VarB <<endl;

    return 0;
}