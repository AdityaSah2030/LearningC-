// 09_oop.cpp
// This file demonstrates Object-Oriented Programming concepts in C++ including:
// - Classes and Objects
// - Constructors & Destructors
// - Operator Overloading
// - Inheritance & Polymorphism

#include <iostream>
#include <string>

using namespace std;

// =========================================================
// 1. Classes and Objects with Constructors & Destructors
// =========================================================

class Person {
private:
    string name;
    int age;

public:
    // Parameterized Constructor
    Person(const string &initName, int initAge) : name(initName), age(initAge) {
        cout << "Person \"" << name << "\" is created." << endl;
    }
    
    // Default Constructor
    Person() : name("Unknown"), age(0) {
        cout << "Default Person created." << endl;
    }
    
    // Destructor
    ~Person() {
        cout << "Person \"" << name << "\" is destroyed." << endl;
    }
    
    // Member function to display person's info.
    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// =========================================================
// 2. Operator Overloading: Complex Number Class
// =========================================================

class Complex {
private:
    double real;
    double imag;
    
public:
    // Constructors
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }
    
    // Overload the '+' operator to add two complex numbers.
    Complex operator+(const Complex &other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    
    // Friend function to overload the insertion operator for output.
    friend ostream& operator<<(ostream &out, const Complex &c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

// =========================================================
// 3. Inheritance & Polymorphism
// =========================================================

// Base class
class Animal {
public:
    // Virtual function for polymorphism.
    virtual void speak() const {
        cout << "Animal makes a sound." << endl;
    }
    
    // Virtual destructor to ensure proper cleanup in derived classes.
    virtual ~Animal() { }
};

// Derived class: Dog
class Dog : public Animal {
public:
    void speak() const override {
        cout << "Dog barks: Woof!" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void speak() const override {
        cout << "Cat meows: Meow!" << endl;
    }
};

int main() {
    cout << "=== Classes and Objects (Person) ===" << endl;
    {
        Person person1("Alice", 30);
        Person person2; // Default person
        person1.displayInfo();
        person2.displayInfo();
    } // 'Person' objects go out of scope here and destructors are called.
    
    cout << "\n=== Operator Overloading (Complex Numbers) ===" << endl;
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 4.5);
    Complex cSum = c1 + c2;
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c1 + c2 = " << cSum << endl;
    
    cout << "\n=== Inheritance & Polymorphism (Animals) ===" << endl;
    // Creating base class pointers to derived class objects.
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();
    
    animal1->speak();  // Calls Dog::speak()
    animal2->speak();  // Calls Cat::speak()
    
    // Clean up dynamic memory.
    delete animal1;
    delete animal2;
    
    return 0;
}
