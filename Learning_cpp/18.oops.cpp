#include <iostream>

class Human {
    public:
        std::string name;
        int age;
        int height;      // this part is same as structs. its attributes.

        void speak() {  // and this part is like creating a func in a class. its method.
            std::cout << "Hello, I am a " << name << std::endl;
        }
        void displayInfo(){
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
            std::cout << "Height: " << height << " cm" << std::endl;
        }
        // constructor - special function that is automatically called when an object is created, helps initialize attributes
        Human() { // this will help if i don't want to pass any argument and want to initialize the attributes myself

        }
        Human(std::string n, int a, int h) {        //if i use name, age, height directly i need to use this->name = name.
            name = n;                               // to avoid name collision with parameter names.
            age = a; 
            height = h;
        }
        //Constructor overloading - multiple constructors with same name but different parameters
        Human(std::string n, int a) {        
            name = n;  // if we want to use different parameters we can create another constructor with same name.
            age = a;
        }
};

int main() {
    // object - a collection of attributes (characteristics) and behaviors (methods)
    // Example: Car object with attributes (color, model) and behaviors (drive, stop)
    // class - blueprint to create objects
    // method - function inside a class that defines behavior of the object. (can be outside of class by using Human::methodName)
    Human human1;  // human1 is an object of Human class and i had to pass an empty constructor to initialize it.
    human1.name = "John"; 
    human1.age = 30;
    human1.height = 180; // as we already defined age and height doing this will only modify it.
    human1.speak();
    human1.displayInfo();
    Human human2("Siddharth", 12, 184);
    human2.speak();
    human2.displayInfo();
    return 0;
}
