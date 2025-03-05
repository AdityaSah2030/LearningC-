// 13_file_io.cpp
// This file demonstrates basic file input/output operations in C++.
// It covers writing to a file using ofstream and reading from a file using ifstream,
// as well as basic error checking for file operations.

#include <iostream>
#include <fstream>   // For file I/O operations
#include <string>

using namespace std;

int main() {
    // ------------------------------
    // 1. Writing to a File
    // ------------------------------
    string filename = "example.txt";
    ofstream outFile(filename);  // Create and open a file for writing

    if (!outFile) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return 1;
    }

    // Write some text to the file.
    outFile << "Hello, File I/O in C++!" << endl;
    outFile << "This is a sample text written to the file." << endl;
    outFile << "Enjoy learning C++ file handling." << endl;

    // Always close the file after writing.
    outFile.close();
    cout << "Data successfully written to " << filename << endl << endl;

    // ------------------------------
    // 2. Reading from a File
    // ------------------------------
    ifstream inFile(filename);   // Open the file for reading

    if (!inFile) {
        cerr << "Error: Unable to open file for reading: " << filename << endl;
        return 1;
    }

    cout << "Reading from " << filename << ":" << endl;
    string line;
    // Read the file line by line.
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Close the file after reading.
    inFile.close();

    return 0;
}
