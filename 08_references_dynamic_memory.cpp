// 08_references_dynamic_memory.cpp
// This file demonstrates the use of references in C++ and how to manage dynamic memory.
// It covers differences between pointers and references and shows examples of dynamic memory allocation.

#include <iostream>

using namespace std;

int main() {
    // ------------------------------
    // 1. References vs. Pointers
    // ------------------------------
    int a = 10;
    
    // Reference: an alias for 'a'. Must be initialized at declaration.
    int &ref = a;
    
    // Pointer: holds the memory address of 'a'.
    int *ptr = &a;
    
    cout << "Initial value of a: " << a << endl;
    cout << "Reference (ref) value: " << ref << endl;
    cout << "Pointer (ptr) dereferenced value: " << *ptr << endl;
    
    // Modifying 'a' through the reference and pointer.
    ref = 20;
    cout << "\nAfter modifying via reference, a: " << a << endl;
    
    *ptr = 30;
    cout << "After modifying via pointer, a: " << a << endl;
    
    // ------------------------------
    // 2. Dynamic Memory Allocation: Single Variable
    // ------------------------------
    // Allocate memory for an integer dynamically and initialize it to 100.
    int *dynInt = new int(100);
    cout << "\nDynamically allocated integer value: " << *dynInt << endl;
    
    // Deallocate the dynamically allocated memory.
    delete dynInt;
    dynInt = nullptr;  // Set pointer to nullptr for safety.
    
    // ------------------------------
    // 3. Dynamic Memory Allocation: Arrays
    // ------------------------------
    int size = 5;
    // Allocate memory for an array of integers.
    int *dynArray = new int[size];
    
    // Initialize and display the array elements.
    cout << "\nDynamically allocated array elements:" << endl;
    for (int i = 0; i < size; i++) {
        dynArray[i] = (i + 1) * 10;  // Example initialization.
        cout << "Element " << i << ": " << dynArray[i] << endl;
    }
    
    // Deallocate the dynamically allocated array.
    delete [] dynArray;
    dynArray = nullptr;  // Set pointer to nullptr for safety.
    
    return 0;
}
