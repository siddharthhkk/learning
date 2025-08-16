#include <iostream>

// INHERITANCE: A way for one class to get properties and methods from another class
// Think of it like family traits - children inherit features from parents

// PARENT CLASS (Base Class)
class Animal {
    public:
        int Value;          // This will be inherited by child classes
        
        Animal() {          // Default constructor
            Value = 0;
        }
        Animal(int val) {   // Parameterized constructor
            Value = val;
        }        
        // Method that child classes will inherit
        void makeSound() {
            std::cout << "Some generic animal sound" << std::endl;
        }
};

// CHILD CLASS (Derived Class) - inherits from Animal
class Dog : public Animal {   // "public Animal" means Dog gets all public stuff from Animal
    public:
        int breedValue;       // Dog's own property (Animal doesn't have this)
        // Dog's own method (Animal doesn't have this)
        void bark() {
            std::cout << "Woof! Woof!" << std::endl;
        }
};

int main() {
    Dog dog;
    
    // INHERITED from Animal class:
    dog.Value = 12;           // ✅ Dog can use Animal's properties
    dog.makeSound();          // ✅ Dog can use Animal's methods (but overridden)
    // DOG'S OWN properties and methods:
    dog.breedValue = 24;      // ✅ Dog's own property
    dog.bark();               // ✅ Dog's own method
    std::cout << "Animal Value: " << dog.Value << std::endl;       // From Animal
    std::cout << "Breed Value: " << dog.breedValue << std::endl;   // From Dog
    return 0;
}