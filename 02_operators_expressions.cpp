// 02_operators_expressions.cpp
// This file demonstrates how to use arithmetic, relational, logical, and bitwise operators in C++.
// It also covers operator precedence and examples of type casting.

#include <iostream>

using namespace std;

int main() {
    // ------------------------------
    // 1. Arithmetic Operators
    // ------------------------------
    int a = 10, b = 3;
    int sum = a + b;          // Addition
    int difference = a - b;   // Subtraction
    int product = a * b;      // Multiplication
    int quotient = a / b;     // Division (integer division)
    int remainder = a % b;    // Modulus (remainder of division)

    cout << "Arithmetic Operators:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Sum (a + b): " << sum << endl;
    cout << "Difference (a - b): " << difference << endl;
    cout << "Product (a * b): " << product << endl;
    cout << "Quotient (a / b): " << quotient << endl;
    cout << "Remainder (a % b): " << remainder << endl << endl;

    // ------------------------------
    // 2. Relational Operators
    // ------------------------------
    bool isEqual = (a == b);          // Equal to
    bool isNotEqual = (a != b);       // Not equal to
    bool isGreater = (a > b);         // Greater than
    bool isLess = (a < b);            // Less than
    bool isGreaterOrEqual = (a >= b); // Greater than or equal to
    bool isLessOrEqual = (a <= b);    // Less than or equal to

    cout << "Relational Operators:" << endl;
    cout << "a == b: " << (isEqual ? "true" : "false") << endl;
    cout << "a != b: " << (isNotEqual ? "true" : "false") << endl;
    cout << "a > b: " << (isGreater ? "true" : "false") << endl;
    cout << "a < b: " << (isLess ? "true" : "false") << endl;
    cout << "a >= b: " << (isGreaterOrEqual ? "true" : "false") << endl;
    cout << "a <= b: " << (isLessOrEqual ? "true" : "false") << endl << endl;

    // ------------------------------
    // 3. Logical Operators
    // ------------------------------
    bool logicAnd = (a > 5 && b < 5); // Logical AND: true if both conditions are true.
    bool logicOr  = (a > 5 || b > 5); // Logical OR: true if at least one condition is true.
    bool logicNot = !(a > 5);         // Logical NOT: negates the condition.

    cout << "Logical Operators:" << endl;
    cout << "(a > 5 && b < 5): " << (logicAnd ? "true" : "false") << endl;
    cout << "(a > 5 || b > 5): " << (logicOr ? "true" : "false") << endl;
    cout << "!(a > 5): " << (logicNot ? "true" : "false") << endl << endl;

    // ------------------------------
    // 4. Bitwise Operators
    // ------------------------------
    int x = 5;   // Binary: 0101
    int y = 9;   // Binary: 1001

    int bitwiseAnd = x & y;     // Bitwise AND: 0101 & 1001 = 0001 (1)
    int bitwiseOr  = x | y;     // Bitwise OR:  0101 | 1001 = 1101 (13)
    int bitwiseXor = x ^ y;     // Bitwise XOR: 0101 ^ 1001 = 1100 (12)
    int leftShift  = x << 1;    // Left shift: 0101 << 1 = 1010 (10)
    int rightShift = y >> 1;    // Right shift: 1001 >> 1 = 0100 (4)

    cout << "Bitwise Operators:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "x & y: " << bitwiseAnd << endl;
    cout << "x | y: " << bitwiseOr << endl;
    cout << "x ^ y: " << bitwiseXor << endl;
    cout << "x << 1: " << leftShift << endl;
    cout << "y >> 1: " << rightShift << endl << endl;

    // ------------------------------
    // 5. Operator Precedence
    // ------------------------------
    // Multiplication has higher precedence than addition.
    // Expression: a + b * 2 -> a + (b * 2)
    int precedenceResult = a + b * 2;  // Evaluates as: 10 + (3 * 2) = 16
    cout << "Operator Precedence:" << endl;
    cout << "Expression (a + b * 2): " << precedenceResult << endl;
    
    // Using parentheses to change the evaluation order.
    int modifiedPrecedence = (a + b) * 2; // Evaluates as: (10 + 3) * 2 = 26
    cout << "Expression ((a + b) * 2): " << modifiedPrecedence << endl << endl;

    // ------------------------------
    // 6. Type Casting
    // ------------------------------
    double dVal = 3.7;
    
    // Implicit type conversion: fractional part is truncated.
    int implicitCast = dVal; // Results in 3
    
    // Explicit type conversion using static_cast.
    int explicitCast = static_cast<int>(dVal); // Also results in 3

    cout << "Type Casting:" << endl;
    cout << "Original double value: " << dVal << endl;
    cout << "Implicit cast to int: " << implicitCast << endl;
    cout << "Explicit cast to int using static_cast: " << explicitCast << endl;

    return 0;
}
