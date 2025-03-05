// 01_basic_syntax_data_types.cpp
// This file demonstrates the fundamental data types and basic I/O in C++.
// It is designed for beginners to understand the syntax and structure of a simple C++ program.

#include <iostream>  // For standard I/O operations

using namespace std;

int main() {
    // ------------------------------
    // 1. Basic Data Types & Variables
    // ------------------------------
    
    // Integer: used for whole numbers.
    int myInt = 10;                
    
    // Floating point: for numbers with decimals (float has less precision).
    float myFloat = 3.14f;         
    
    // Double: for numbers with decimals (more precision than float).
    double myDouble = 3.14159;     
    
    // Character: for storing a single character.
    char myChar = 'A';             
    
    // Boolean: represents true or false.
    bool myBool = true;            

    // ------------------------------
    // 2. Output to the Console
    // ------------------------------
    
    // Display the values of the variables using cout.
    cout << "Integer value: " << myInt << endl;
    cout << "Float value: " << myFloat << endl;
    cout << "Double value: " << myDouble << endl;
    cout << "Character value: " << myChar << endl;
    cout << "Boolean value: " << (myBool ? "true" : "false") << endl;
    
    // ------------------------------
    // 3. Basic Input from the User
    // ------------------------------
    
    // Prompt the user to enter an integer.
    int userInput;
    cout << "Enter an integer: ";
    cin >> userInput;
    
    // Display the input provided by the user.
    cout << "You entered: " << userInput << endl;
    
    // ------------------------------
    // 4. End of Program
    // ------------------------------
    
    return 0;
}
