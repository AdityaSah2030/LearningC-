// 03_control_flow.cpp
// This file demonstrates control flow in C++ including:
// - Conditional statements (if-else and switch-case)
// - Loop constructs (for, while, and do-while)
// - Using break and continue within loops

#include <iostream>

using namespace std;

int main() {
    // ------------------------------
    // 1. Conditional Statements: if-else
    // ------------------------------
    
    int num;
    cout << "Enter a number to check if it's positive, negative, or zero: ";
    cin >> num;
    
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    
    // ------------------------------
    // 2. Conditional Statements: switch-case
    // ------------------------------
    
    int day;
    cout << "\nEnter a day number (1-7): ";
    cin >> day;
    
    // Switch-case to map day number to day name
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number!" << endl;
            break;
    }
    
    // ------------------------------
    // 3. Loop Constructs: For Loop
    // ------------------------------
    
    cout << "\nFor Loop: Counting from 1 to 5" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // ------------------------------
    // 4. Loop Constructs: While Loop
    // ------------------------------
    
    cout << "\nWhile Loop: Counting down from 5 to 1" << endl;
    int j = 5;
    while (j >= 1) {
        cout << j << " ";
        j--;
    }
    cout << endl;
    
    // ------------------------------
    // 5. Loop Constructs: Do-While Loop
    // ------------------------------
    
    cout << "\nDo-While Loop: Enter numbers until you enter 0" << endl;
    int input;
    do {
        cout << "Enter a number (0 to quit): ";
        cin >> input;
        cout << "You entered: " << input << endl;
    } while (input != 0);
    
    // ------------------------------
    // 6. Using break and continue in a Loop
    // ------------------------------
    
    cout << "\nFor Loop demonstrating break and continue:" << endl;
    for (int k = 1; k <= 10; k++) {
        if (k == 5) {
            // When k is 5, skip this iteration.
            cout << "Skipping 5 using continue." << endl;
            continue;
        }
        if (k == 8) {
            // When k is 8, exit the loop.
            cout << "Breaking out of the loop at 8." << endl;
            break;
        }
        cout << "k = " << k << endl;
    }
    
    return 0;
}
