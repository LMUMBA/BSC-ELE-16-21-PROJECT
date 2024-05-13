#include <fstream>
#include<iostream>
using namespace std;

 int main() {
    char data[100];

    // open a text file in write mode
    ofstream outFile;
    outFile.open("aFile.txt");

    cout << "Writing to the file " << endl;
    cout << "Enter your name :";
    cin.getline(data, 100);

    //write inputted data into the text file.
    outFile << data <<endl;

    cout << "Enter your age: " ;
    cin >> data;
    cin.ignore();

    //again write inputted data int the text file.
    outFile << data << endl;

    //close the opened file.
    outFile.close();

    // open a text file in read mode.
    ifstream inFile;
    inFile.open("aFile.txt");

    cout<< "Reading from the file" << endl;
    inFile>> data;
    
    //write the data at the screen.
    cout << data << endl; 
    
    // again read the data from the file and display it.

    inFile >> data;
    cout << data << endl;

    // close the opened file.
    inFile.close();

    return 0; 



 }

