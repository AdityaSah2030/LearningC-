// 05_strings.cpp
// This file demonstrates working with strings in C++.
// It covers C-style strings (character arrays) and the std::string class with various inbuilt functions.

#include <iostream>
#include <cstring>    // For C-style string functions
#include <string>     // For std::string
#include <algorithm>  // For std::transform
#include <cctype>     // For std::toupper

using namespace std;

int main() {
    // ------------------------------
    // 1. C-style Strings (Character Arrays)
    // ------------------------------
    char cstr1[] = "Hello, World!";
    char cstr2[30] = "Hello";
    
    // Concatenating C-style strings using strcat.
    // Ensure that the destination array has enough space.
    strcat(cstr2, ", C++ World!");
    
    cout << "C-style string after concatenation: " << cstr2 << endl;
    cout << "Length of cstr1: " << strlen(cstr1) << endl;
    
    // ------------------------------
    // 2. C++ Strings (std::string)
    // ------------------------------
    string cppStr1 = "Hello, C++ World!";
    
    // Basic concatenation using the + operator.
    string cppStr2 = "LearningCPP";
    string cppStr3 = cppStr1 + " " + cppStr2;
    cout << "\nConcatenated std::string: " << cppStr3 << endl;
    
    // Accessing individual characters and getting the length.
    cout << "First character of cppStr1: " << cppStr1[0] << endl;
    cout << "Length of cppStr1: " << cppStr1.length() << endl;
    
    // ------------------------------
    // Special Inbuilt String Functions
    // ------------------------------
    
    // Substring extraction: Extract "C++" from cppStr1.
    size_t pos = cppStr1.find("C++");
    if (pos != string::npos) {
        string subStr = cppStr1.substr(pos, 3); // "C++" is 3 characters long.
        cout << "Extracted substring: " << subStr << endl;
    }
    
    // Insertion: Insert " Awesome" after "Hello,".
    string insertedStr = cppStr1;
    insertedStr.insert(6, " Awesome");
    cout << "After insertion: " << insertedStr << endl;
    
    // Erasure: Remove "C++" from cppStr1 (if found).
    string erasedStr = cppStr1;
    pos = erasedStr.find("C++");
    if (pos != string::npos) {
        erasedStr.erase(pos, 3);  // Remove 3 characters starting from pos.
        cout << "After erasure: " << erasedStr << endl;
    }
    
    // Replacement: Replace "World" with "Universe".
    string replacedStr = cppStr1;
    pos = replacedStr.find("World");
    if (pos != string::npos) {
        replacedStr.replace(pos, 5, "Universe"); // Replace "World" (5 characters) with "Universe".
        cout << "After replacement: " << replacedStr << endl;
    }
    
    // Comparison: Using compare() to determine lexicographical order.
    string compStr1 = "Apple";
    string compStr2 = "Banana";
    int compResult = compStr1.compare(compStr2);
    if (compResult == 0) {
        cout << compStr1 << " is equal to " << compStr2 << endl;
    } else if (compResult < 0) {
        cout << compStr1 << " is lexicographically less than " << compStr2 << endl;
    } else {
        cout << compStr1 << " is lexicographically greater than " << compStr2 << endl;
    }
    
    // Transformation: Convert cppStr1 to uppercase.
    string upperStr = cppStr1;
    transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
    cout << "cppStr1 in uppercase: " << upperStr << endl;
    
    // Clearing a string and checking if it's empty.
    string clearStr = "To be cleared";
    cout << "Before clearing, clearStr: " << clearStr << endl;
    clearStr.clear();
    cout << "After clearing, clearStr is " << (clearStr.empty() ? "empty" : "not empty") << endl;
    
    return 0;
}
