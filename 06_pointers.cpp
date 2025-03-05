// 06_pointers.cpp
// This file demonstrates basic pointer concepts in C++ including:
// - Declaring and initializing pointers
// - Dereferencing pointers to access or modify data
// - Pointer arithmetic using an array
// - Pointer-to-pointer usage
// - Different const pointer variations

#include <iostream>

using namespace std;

int main() {
    // ------------------------------
    // 1. Basic Pointer Usage
    // ------------------------------
    int var = 42;            // An integer variable
    int *ptr = &var;         // Pointer to int, storing the address of var

    cout << "Basic Pointer Usage:" << endl;
    cout << "Value of var: " << var << endl;
    cout << "Address of var (&var): " << &var << endl;
    cout << "Pointer ptr holds address: " << ptr << endl;
    cout << "Dereferencing ptr gives: " << *ptr << endl;

    // Modifying the variable via the pointer
    *ptr = 100;
    cout << "After modifying via pointer, var: " << var << endl << endl;

    // ------------------------------
    // 2. Pointer Arithmetic with Arrays
    // ------------------------------
    int arr[5] = {10, 20, 30, 40, 50};  // An array of integers
    int *pArr = arr;                   // Pointer to the first element of the array

    cout << "Pointer Arithmetic on Array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << *(pArr + i)
             << " (Address: " << (pArr + i) << ")" << endl;
    }
    cout << endl;

    // ------------------------------
    // 3. Pointer to Pointer
    // ------------------------------
    int **ptr2 = &ptr;   // Pointer to a pointer (stores the address of ptr)

    cout << "Pointer to Pointer:" << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of ptr2 (address of ptr): " << ptr2 << endl;
    cout << "Dereferencing ptr2 gives (should be ptr): " << *ptr2 << endl;
    cout << "Dereferencing twice gives the value of var: " << **ptr2 << endl << endl;

    // ------------------------------
    // 4. Pointers and Const
    // ------------------------------
    int value1 = 5;
    int value2 = 10;

    // Pointer to const int: You cannot modify the pointed-to value through this pointer.
    const int *pConst = &value1;
    cout << "Pointer to const int:" << endl;
    cout << "Value pointed by pConst: " << *pConst << endl;
    // pConst = &value2;    // Allowed: pointer can point elsewhere.
    // *pConst = 20;        // Not allowed: cannot modify value via pConst.
    cout << endl;

    // Const pointer: The pointer must always point to the same address.
    int *const constPtr = &value1;
    cout << "Const pointer:" << endl;
    cout << "Value pointed by constPtr: " << *constPtr << endl;
    *constPtr = 15;       // Allowed: modifying the value is fine.
    cout << "After modifying, value pointed by constPtr: " << *constPtr << endl;
    // constPtr = &value2;  // Not allowed: cannot reassign the pointer.
    cout << endl;

    // Const pointer to const int: Neither the pointer nor the pointed-to value can be modified.
    const int *const constPtrConst = &value1;
    cout << "Const pointer to const int:" << endl;
    cout << "Value pointed by constPtrConst: " << *constPtrConst << endl;
    // *constPtrConst = 20;    // Not allowed.
    // constPtrConst = &value2;  // Not allowed.
    cout << endl;

    return 0;
}
