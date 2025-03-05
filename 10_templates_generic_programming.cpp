// 10_templates_generic_programming.cpp
// This file demonstrates the use of templates in C++.
// It includes examples of a function template, a class template, and template specialization.

#include <iostream>
#include <string>

using namespace std;

// ------------------------------
// 1. Function Template
// ------------------------------
// A generic function to get the maximum of two values.
template <typename T>
T getMax(T a, T b) {
    return (a > b ? a : b);
}

// ------------------------------
// 2. Class Template
// ------------------------------
// A generic Pair class that holds two values of the same type.
template <typename T>
class Pair {
private:
    T first, second;
public:
    // Constructor to initialize the pair.
    Pair(T a, T b) : first(a), second(b) { }
    
    // Function to display the pair.
    void display() const {
        cout << "Pair(" << first << ", " << second << ")" << endl;
    }
};

// ------------------------------
// 3. Template Specialization
// ------------------------------
// Specialized version of the Pair class for std::string to provide a custom display format.
template <>
class Pair<string> {
private:
    string first, second;
public:
    // Constructor to initialize the string pair.
    Pair(string a, string b) : first(a), second(b) { }
    
    // Custom display function for string pairs.
    void display() const {
        cout << "String Pair: [" << first << "] and [" << second << "]" << endl;
    }
};

int main() {
    cout << "=== Template Function Example ===" << endl;
    cout << "Max of 10 and 20: " << getMax(10, 20) << endl;
    cout << "Max of 3.14 and 2.718: " << getMax(3.14, 2.718) << endl;
    cout << "Max of 'A' and 'B': " << getMax('A', 'B') << endl;
    
    cout << "\n=== Template Class Example ===" << endl;
    // Using the generic Pair class with int.
    Pair<int> intPair(100, 200);
    intPair.display();
    
    // Using the generic Pair class with double.
    Pair<double> doublePair(3.14, 2.718);
    doublePair.display();
    
    // Using the specialized Pair class for std::string.
    Pair<string> stringPair("Hello", "World");
    stringPair.display();
    
    return 0;
}
