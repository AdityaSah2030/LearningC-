// 04_arrays.cpp
// This file demonstrates the use of arrays in C++.
// It covers one-dimensional arrays, multi-dimensional arrays, and basic array operations.

#include <iostream>

using namespace std;

int main() {
    // ------------------------------
    // 1. One-Dimensional Arrays
    // ------------------------------
    // Declare and initialize an array of 5 integers.
    int oneDArray[5] = {10, 20, 30, 40, 50};

    cout << "One-dimensional array elements:" << endl;
    // Iterate over the array using a for loop.
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << oneDArray[i] << endl;
    }
    cout << endl;

    // ------------------------------
    // 2. Two-Dimensional Arrays
    // ------------------------------
    // Declare and initialize a 3x3 matrix.
    int twoDArray[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Two-dimensional array (matrix) elements:" << endl;
    // Iterate over the 2D array using nested loops.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << twoDArray[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // ------------------------------
    // 3. Array Manipulation and Operations
    // ------------------------------
    // Modify an element in the one-dimensional array.
    oneDArray[2] = 100;  // Changing the third element (index 2) from 30 to 100
    cout << "After modification, element at index 2: " << oneDArray[2] << endl;

    // Calculate the sum of all elements in the one-dimensional array.
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += oneDArray[i];
    }
    cout << "Sum of elements in the one-dimensional array: " << sum << endl;

    return 0;
}
