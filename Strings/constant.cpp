#include <iostream>
using namespace std;

int main() {
    char greeting[6] {'H','e', 'l', 'l','o', '\0'};

    cout<< "Greeting message to mumba: ";
    cout<< greeting << endl;

    return 0;
}