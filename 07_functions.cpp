// 07_functions.cpp
// This file demonstrates various function concepts in C++ including:
// - Function declaration and definition
// - Passing parameters by value and by reference
// - Function overloading
// - Default parameters
// - Inline functions

#include <iostream>
#include <string>

using namespace std;

// ------------------------------
// 1. Function Declaration and Definition
// ------------------------------

// Function to add two integers (pass by value)
int add(int a, int b) {
    return a + b;
}

// Function Overloading: Add two doubles (pass by value)
double add(double a, double b) {
    return a + b;
}

// ------------------------------
// 2. Pass by Reference: Swap Function
// ------------------------------

// Swap two integers by reference
void swapValues(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// ------------------------------
// 3. Default Parameters
// ------------------------------

// Greeting function with a default parameter
void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

// ------------------------------
// 4. Inline Functions
// ------------------------------

// Inline function to calculate the square of a number
inline int square(int num) {
    return num * num;
}

int main() {
    cout << "Function Examples in C++" << endl;
    
    // Demonstrating function declaration and function overloading:
    int sumInt = add(10, 20);
    double sumDouble = add(3.14, 2.86);
    cout << "Sum of integers (10 + 20): " << sumInt << endl;
    cout << "Sum of doubles (3.14 + 2.86): " << sumDouble << endl;
    
    // Demonstrating pass by reference:
    int a = 5, b = 10;
    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    
    // Demonstrating default parameters:
    cout << "\nGreeting with a provided name:" << endl;
    greet("Alice");
    cout << "Greeting using the default parameter:" << endl;
    greet();
    
    // Demonstrating an inline function:
    int num = 7;
    cout << "\nSquare of " << num << " is: " << square(num) << endl;
    
    return 0;
}
