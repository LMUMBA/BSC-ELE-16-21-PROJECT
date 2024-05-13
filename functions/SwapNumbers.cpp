#include <iostream>
using namespace std;

// Function to swap two integers using references
void SwapNumbers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int VarA = 25, VarB = 100;

    cout << "VarA before swap: " << VarA <<endl; //VarA is 100
    cout<<  "VarB before swap: " << VarB << endl; //VarB is 25

    // Call the SwapNumbers function to swap the values
    SwapNumbers(VarA, VarB);

    cout << " VarA after swap:  " <<VarA <<endl; // Var is 100
    cout << " VarB after swap:  " <<VarB<< endl; // Var is 25

    return 0;
}