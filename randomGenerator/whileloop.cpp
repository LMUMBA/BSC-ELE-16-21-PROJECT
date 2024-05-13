#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number = 0;

    while (!(number) || number < 5 || number > 10) {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> number;

        // Check if the number is a valid integer
        if (cin.fail()) {
            cin.clear(); // Clear the error state
            cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n'); // Ignore invalid number
            cout << "Invalid input. Please enter a valid integer." << endl;
            continue;
        }
    }

    // If control reaches here, number contains a valid number
    cout << "number value accpted:" << number << endl;


    return 0;
}
