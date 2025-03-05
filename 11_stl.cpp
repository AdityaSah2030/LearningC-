// 11_stl.cpp
// This file demonstrates the usage of common STL containers and algorithms in C++.
// It covers:
// - STL Vector: operations, sorting, and accumulation.
// - STL List: insertion, iteration, and searching.
// - STL Map: insertion and iteration.
// - STL Algorithms: using iterators with copy.

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>  // For sort, find, copy
#include <numeric>    // For accumulate
#include <iterator>   // For ostream_iterator

using namespace std;

int main() {
    // ------------------------------
    // 1. STL Vector
    // ------------------------------
    cout << "STL Vector Example:" << endl;
    vector<int> numbers = {5, 3, 9, 1, 7};

    // Print original vector.
    cout << "Original vector: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    // Sorting the vector.
    sort(numbers.begin(), numbers.end());
    cout << "Sorted vector: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    // Calculating the sum of elements using accumulate.
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum of vector elements: " << sum << endl << endl;

    // ------------------------------
    // 2. STL List
    // ------------------------------
    cout << "STL List Example:" << endl;
    list<string> fruits = {"Apple", "Banana", "Cherry", "Date"};

    // Iterating over the list using a range-based loop.
    cout << "List of fruits: ";
    for (const auto &fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;

    // Finding an element in the list.
    auto it = find(fruits.begin(), fruits.end(), "Cherry");
    if (it != fruits.end()) {
        cout << "Found: " << *it << endl;
    } else {
        cout << "Cherry not found." << endl;
    }
    cout << endl;

    // ------------------------------
    // 3. STL Map
    // ------------------------------
    cout << "STL Map Example:" << endl;
    map<string, int> ageMap;
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap["Charlie"] = 22;

    // Iterating over the map.
    for (const auto &entry : ageMap) {
        cout << entry.first << " is " << entry.second << " years old." << endl;
    }
    cout << endl;

    // Using find() to search in the map.
    auto mapIt = ageMap.find("Bob");
    if (mapIt != ageMap.end()) {
        cout << "Found Bob, Age: " << mapIt->second << endl;
    } else {
        cout << "Bob not found in map." << endl;
    }
    cout << endl;

    // ------------------------------
    // 4. STL Algorithms with Iterators
    // ------------------------------
    cout << "STL Algorithms Example:" << endl;
    // Using ostream_iterator to output the sorted vector.
    cout << "Vector elements using ostream_iterator: ";
    copy(numbers.begin(), numbers.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    
    return 0;
}
