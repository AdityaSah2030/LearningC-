// 16_modern_cpp.cpp
// This file demonstrates modern C++ features such as:
// - auto type inference and decltype
// - Lambda expressions and their usage with STL algorithms
// - Range-based loops and structured bindings (C++17)
// - constexpr functions for compile-time evaluation

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>  // For std::sort
#include <string>

using namespace std;

// ------------------------------
// 1. constexpr Function
// ------------------------------
// A constexpr function to calculate factorial at compile-time.
constexpr int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1));
}

// ------------------------------
// 2. Lambda Expressions & auto
// ------------------------------
void lambdaExamples() {
    // Simple lambda that prints a message.
    auto greet = []() {
        cout << "Hello from a lambda expression!" << endl;
    };
    greet();

    // Lambda that captures external variables by value.
    int factor = 3;
    auto multiply = [factor](int x) -> int {
        return x * factor;
    };
    cout << "3 multiplied by 5 is: " << multiply(5) << endl;

    // Using lambda with STL algorithm: sorting a vector.
    vector<int> numbers = { 5, 2, 9, 1, 5, 6 };
    cout << "Original vector: ";
    for (auto n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    // Sort in descending order using a lambda comparator.
    sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b;
    });
    cout << "Sorted vector (descending): ";
    for (auto n : numbers) {
        cout << n << " ";
    }
    cout << endl;
}

// ------------------------------
// 3. Range-based For Loops & Structured Bindings (C++17)
// ------------------------------
void structuredBindingsExample() {
    // Using a range-based loop with auto.
    vector<string> fruits = {"Apple", "Banana", "Cherry"};
    cout << "Fruits: ";
    for (auto &fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;

    // Structured bindings with a map (C++17).
    map<string, int> ageMap = { {"Alice", 30}, {"Bob", 25}, {"Charlie", 22} };
    cout << "Ages:" << endl;
    for (const auto &[name, age] : ageMap) {
        cout << name << " is " << age << " years old." << endl;
    }
}

// ------------------------------
// 4. auto and decltype Examples
// ------------------------------
void autoDecltypeExamples() {
    // auto deduces the type from the initializer.
    auto number = 42;            // deduced as int
    auto pi = 3.14159;           // deduced as double
    auto text = "Modern C++";    // deduced as const char*
    
    // decltype inspects the type of an expression.
    decltype(number) anotherNumber = 100;  // anotherNumber is int

    cout << "number: " << number << ", pi: " << pi << ", text: " << text << endl;
    cout << "anotherNumber (decltype of number): " << anotherNumber << endl;
}

int main() {
    cout << "Modern C++ Features Demonstration" << endl << endl;
    
    // 1. constexpr function usage
    constexpr int fact5 = factorial(5);  // Computed at compile time.
    cout << "Factorial of 5 (computed at compile time): " << fact5 << endl << endl;
    
    // 2. Lambda expressions and auto
    lambdaExamples();
    cout << endl;
    
    // 3. Range-based loops and structured bindings
    structuredBindingsExample();
    cout << endl;
    
    // 4. auto and decltype examples
    autoDecltypeExamples();
    
    return 0;
}
