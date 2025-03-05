// 02_operators_expressions.cpp
// This file demonstrates various operators and expressions in C++.
// It covers arithmetic, relational, logical, bitwise operations, operator precedence, and type casting.

#include <iostream>
using namespace std;

int main() {
    // ------------------------------
    // 1. Arithmetic Operators
    // ------------------------------
    int a = 10, b = 3;
    cout << "Arithmetic Operators:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Addition (a + b): " << a + b << endl;
    cout << "Subtraction (a - b): " << a - b << endl;
    cout << "Multiplication (a * b): " << a * b << endl;
    cout << "Division (a / b): " << a / b << endl; // Integer division
    cout << "Modulus (a % b): " << a % b << endl;
    cout << endl;

    // ------------------------------
    // 2. Relational & Logical Operators
    // ------------------------------
    cout << "Relational and Logical Operators:" << endl;
    cout << "Is a equal to b? " << (a == b ? "Yes" : "No") << endl;
    cout << "Is a not equal to b? " << (a != b ? "Yes" : "No") << endl;
    cout << "Is a greater than b? " << (a > b ? "Yes" : "No") << endl;
    cout << "Logical AND (a > 5 && b < 5): " << ((a > 5 && b < 5) ? "True" : "False") << endl;
    cout << "Logical OR (a < 5 || b < 5): " << ((a < 5 || b < 5) ? "True" : "False") << endl;
    cout << endl;

    // ------------------------------
    // 3. Bitwise Operators
    // ------------------------------
    cout << "Bitwise Operators:" << endl;
    cout << "a in binary: " << bitset<8>(a) << endl;
    cout << "b in binary: " << bitset<8>(b) << endl;
    cout << "Bitwise AND (a & b): " << (a & b) << endl;
    cout << "Bitwise OR (a | b): " << (a | b) << endl;
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;
    cout << "Left Shift (a << 1): " << (a << 1) << endl;
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl;
    cout << endl;

    // ------------------------------
    // 4. Operator Precedence
    // ------------------------------
    // In the following expression, multiplication (*) has higher precedence than addition (+)
    int result = a + b * 2;  // equivalent to a + (b * 2)
    cout << "Operator Precedence:" << endl;
    cout << "Result of a + b * 2 (with a = " << a << " and b = " << b << "): " << result << endl;
    cout << endl;

    // ------------------------------
    // 5. Type Casting
    // ------------------------------
    // Old-style cast
    double divOldStyle = (double)a / b;
    // Modern C++ casting using static_cast
    double divStaticCast = static_cast<double>(a) / b;

    cout << "Type Casting:" << endl;
    cout << "Using old-style cast: (double)a / b = " << divOldStyle << endl;
    cout << "Using static_cast: static_cast<double>(a) / b = " << divStaticCast << endl;
    
    // End of Program
    return 0;
}
