// 14_advanced_memory_management.cpp
// This file demonstrates advanced memory management in C++ using smart pointers.
// It covers std::unique_ptr, std::shared_ptr, and std::weak_ptr, along with RAII principles.

#include <iostream>
#include <memory>  // For smart pointers

using namespace std;

// A simple class to represent a resource.
class Resource {
public:
    Resource() {
        cout << "Resource acquired." << endl;
    }
    ~Resource() {
        cout << "Resource released." << endl;
    }
    void sayHello() const {
        cout << "Hello from Resource!" << endl;
    }
};

int main() {
    cout << "Advanced Memory Management with Smart Pointers" << endl << endl;
    
    // ------------------------------
    // 1. Using std::unique_ptr
    // ------------------------------
    {
        unique_ptr<Resource> uniqueRes(new Resource());
        uniqueRes->sayHello();
        // The Resource will be automatically deallocated when uniqueRes goes out of scope.
    } // Resource is released here.
    
    cout << endl;
    
    // ------------------------------
    // 2. Using std::shared_ptr
    // ------------------------------
    shared_ptr<Resource> sharedRes1 = make_shared<Resource>();
    {
        // sharedRes2 shares ownership of the resource with sharedRes1.
        shared_ptr<Resource> sharedRes2 = sharedRes1;
        sharedRes2->sayHello();
        cout << "Shared pointer use count inside block: " << sharedRes1.use_count() << endl;
    } // sharedRes2 goes out of scope, but the Resource remains as sharedRes1 still owns it.
    cout << "Shared pointer use count after block: " << sharedRes1.use_count() << endl;
    
    cout << endl;
    
    // ------------------------------
    // 3. Using std::weak_ptr
    // ------------------------------
    weak_ptr<Resource> weakRes;
    {
        shared_ptr<Resource> sharedRes3 = make_shared<Resource>();
        // weakRes observes sharedRes3 without owning it.
        weakRes = sharedRes3;
        cout << "Inside block, weak pointer expired? " << (weakRes.expired() ? "Yes" : "No") << endl;
        
        // Lock the weak pointer to get a shared_ptr and use the resource if it's still available.
        if (auto lockedRes = weakRes.lock()) {
            lockedRes->sayHello();
        }
    } // sharedRes3 goes out of scope, and Resource is released.
    
    cout << "After block, weak pointer expired? " << (weakRes.expired() ? "Yes" : "No") << endl;
    
    return 0;
}
