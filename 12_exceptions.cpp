// 12_exceptions.cpp
// This file demonstrates exception handling in C++.
// It covers basic try-catch blocks, throwing standard exceptions,
// and using a custom exception class.

#include <iostream>
#include <stdexcept>  // For std::runtime_error
#include <string>

using namespace std;

// ------------------------------
// Custom Exception Class
// ------------------------------
class CustomException : public exception {
private:
    string message;
public:
    CustomException(const string &msg) : message(msg) { }
    virtual const char* what() const noexcept {
        return message.c_str();
    }
};

// ------------------------------
// Function: safeDivide
// ------------------------------
// Divides two numbers and throws a runtime_error if division by zero is attempted.
double safeDivide(double numerator, double denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero error!");
    }
    return numerator / denominator;
}

// ------------------------------
// Function: checkValue
// ------------------------------
// Checks if a given integer is positive. Throws a custom exception for negative values
// or a runtime_error if the value is zero.
void checkValue(int value) {
    if (value < 0) {
        throw CustomException("Negative value error!");
    } else if (value == 0) {
        throw runtime_error("Value cannot be zero!");
    }
    cout << "Value is positive and non-zero: " << value << endl;
}

int main() {
    cout << "Exception Handling in C++" << endl;

    // ------------------------------
    // 1. Handling Standard Exceptions
    // ------------------------------
    try {
        double num = 10.0;
        double den = 0.0;
        cout << "\nAttempting division: " << num << " / " << den << endl;
        double result = safeDivide(num, den);
        cout << "Result: " << result << endl;
    } catch (const runtime_error &e) {
        cout << "Caught runtime_error: " << e.what() << endl;
    }

    // ------------------------------
    // 2. Handling Custom Exceptions
    // ------------------------------
    try {
        int testValue = -5;
        cout << "\nChecking value: " << testValue << endl;
        checkValue(testValue);
    } catch (const CustomException &e) {
        cout << "Caught CustomException: " << e.what() << endl;
    } catch (const runtime_error &e) {
        cout << "Caught runtime_error: " << e.what() << endl;
    }

    // ------------------------------
    // 3. Handling Multiple Exceptions in One Block
    // ------------------------------
    try {
        int testValue = 0;
        cout << "\nChecking value: " << testValue << endl;
        checkValue(testValue);
    } catch (const exception &e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    cout << "\nProgram execution continues after exception handling." << endl;
