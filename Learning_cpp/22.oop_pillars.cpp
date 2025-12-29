#include <iostream>
#include <string>

// =====================================================================
// THE 4 PILLARS OF OBJECT-ORIENTED PROGRAMMING (OOP)
// =====================================================================
// 1. ENCAPSULATION  - Bundling data and methods together, hiding internals
// 2. INHERITANCE    - Creating new classes based on existing classes
// 3. POLYMORPHISM   - Same interface, different implementations
// 4. ABSTRACTION    - Hiding complex implementation details
// =====================================================================

// ==================== PILLAR 1: ENCAPSULATION ====================
// Encapsulation: Bundle data and methods together, control access to data

class BankAccount {
    private:
        double balance;        // PRIVATE: Hidden from outside world
        std::string accountNumber;
        
    public:
        // Constructor
        BankAccount(std::string accNum, double initialBalance) {
            accountNumber = accNum;
            balance = (initialBalance >= 0) ? initialBalance : 0;
        }
        
        // PUBLIC INTERFACE: Controlled access to private data
        double getBalance() const {
            return balance;
        }
        
        bool deposit(double amount) {
            if(amount > 0) {
                balance += amount;
                return true;
            }
            return false;
        }
        
        bool withdraw(double amount) {
            if(amount > 0 && amount <= balance) {
                balance -= amount;
                return true;
            }
            return false;
        }
        
        std::string getAccountNumber() const {
            return accountNumber;
        }
};

// ==================== PILLAR 2: INHERITANCE ====================
// Inheritance: Create new classes based on existing classes (IS-A relationship)

// BASE CLASS (Parent)
class Vehicle {
    protected:  // PROTECTED: Accessible by child classes but not outside
        std::string brand;
        int year;
        
    public:
        Vehicle(std::string b, int y) : brand(b), year(y) {}
        
        virtual void start() {
            std::cout << brand << " vehicle is starting..." << std::endl;
        }
        
        virtual void stop() {
            std::cout << brand << " vehicle is stopping..." << std::endl;
        }
        
        virtual ~Vehicle() {}  // Virtual destructor for proper cleanup
        
        void displayInfo() {
            std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
        }
};

// DERIVED CLASS (Child) - inherits from Vehicle
class Car : public Vehicle {
    private:
        int doors;
        
    public:
        Car(std::string b, int y, int d) : Vehicle(b, y), doors(d) {}
        
        // OVERRIDE parent method (Polymorphism)
        void start() override {
            std::cout << brand << " car engine is starting with key..." << std::endl;
        }
        
        // Car-specific method
        void honk() {
            std::cout << brand << " car: Beep! Beep!" << std::endl;
        }
        
        void displayCarInfo() {
            displayInfo();  // Using inherited method
            std::cout << "Doors: " << doors << std::endl;
        }
};

// Another DERIVED CLASS
class Motorcycle : public Vehicle {
    private:
        bool hasSidecar;
        
    public:
        Motorcycle(std::string b, int y, bool sidecar) : Vehicle(b, y), hasSidecar(sidecar) {}
        
        // OVERRIDE parent method (Polymorphism)
        void start() override {
            std::cout << brand << " motorcycle is kick-starting..." << std::endl;
        }
        
        void wheelie() {
            std::cout << brand << " motorcycle doing a wheelie!" << std::endl;
        }
};

// ==================== PILLAR 3: POLYMORPHISM ====================
// Polymorphism: Same interface, different implementations

// Function that demonstrates RUNTIME POLYMORPHISM
void startVehicle(Vehicle* vehicle) {
    // SAME function call, DIFFERENT behavior based on actual object type
    vehicle->start();  // Will call appropriate start() method
}

// COMPILE-TIME POLYMORPHISM (Function Overloading)
class Calculator {
    public:
        int calculate(int a, int b) {
            return a + b;
        }
        
        double calculate(double a, double b) {
            return a + b;
        }
        
        int calculate(int a, int b, int c) {
            return a + b + c;
        }
};

// ==================== PILLAR 4: ABSTRACTION ====================
// Abstraction: Hide complex implementation details, show only essential features

// ABSTRACT BASE CLASS (Interface)
class Shape {
    public:
        // PURE VIRTUAL FUNCTIONS = Abstract methods
        virtual double calculateArea() = 0;      // Must be implemented by derived classes
        virtual double calculatePerimeter() = 0; // Must be implemented by derived classes
        virtual void draw() = 0;                 // Must be implemented by derived classes
        
        // Non-pure virtual function (can be overridden but not required)
        virtual void displayInfo() {
            std::cout << "This is a shape with area: " << calculateArea() << std::endl;
        }
        
        virtual ~Shape() {}  // Virtual destructor
};

// CONCRETE CLASS implementing the abstract interface
class Rectangle : public Shape {
    private:
        double width, height;
        
    public:
        Rectangle(double w, double h) : width(w), height(h) {}
        
        // MUST implement all pure virtual functions
        double calculateArea() override {
            return width * height;
        }
        
        double calculatePerimeter() override {
            return 2 * (width + height);
        }
        
        void draw() override {
            std::cout << "Drawing a rectangle " << width << "x" << height << std::endl;
        }
};

class Circle : public Shape {
    private:
        double radius;
        const double PI = 3.14159;
        
    public:
        Circle(double r) : radius(r) {}
        
        // MUST implement all pure virtual functions
        double calculateArea() override {
            return PI * radius * radius;
        }
        
        double calculatePerimeter() override {
            return 2 * PI * radius;
        }
        
        void draw() override {
            std::cout << "Drawing a circle with radius " << radius << std::endl;
        }
};

// Function that works with any Shape (Abstraction + Polymorphism)
void processShape(Shape* shape) {
    shape->draw();
    shape->displayInfo();
    std::cout << "Perimeter: " << shape->calculatePerimeter() << std::endl;
}

// ==================== MAIN FUNCTION ====================
int main() {
    std::cout << "======= THE 4 PILLARS OF OOP DEMONSTRATION =======" << std::endl;
    
    std::cout << "\n=== PILLAR 1: ENCAPSULATION ===" << std::endl;
    std::cout << "Data and methods bundled together, controlled access" << std::endl;
    
    BankAccount account("123456", 1000.0);
    std::cout << "Initial balance: $" << account.getBalance() << std::endl;
    
    account.deposit(500.0);
    std::cout << "After deposit: $" << account.getBalance() << std::endl;
    
    account.withdraw(200.0);
    std::cout << "After withdrawal: $" << account.getBalance() << std::endl;
    
    // account.balance = -1000;  // ERROR! Can't access private member directly
    
    std::cout << "\n=== PILLAR 2: INHERITANCE ===" << std::endl;
    std::cout << "Child classes inherit properties and methods from parent classes" << std::endl;
    
    Car myCar("Toyota", 2023, 4);
    Motorcycle myBike("Harley", 2022, false);
    
    myCar.displayCarInfo();     // Uses inherited and own methods
    myCar.honk();               // Car-specific method
    
    myBike.displayInfo();       // Inherited method
    myBike.wheelie();           // Motorcycle-specific method
    
    std::cout << "\n=== PILLAR 3: POLYMORPHISM ===" << std::endl;
    std::cout << "Same interface, different implementations" << std::endl;
    
    // Runtime Polymorphism
    Vehicle* vehicles[] = {&myCar, &myBike};
    
    for(int i = 0; i < 2; i++) {
        startVehicle(vehicles[i]);  // Same call, different behavior
    }
    
    // Compile-time Polymorphism
    Calculator calc;
    std::cout << "calc.calculate(5, 3) = " << calc.calculate(5, 3) << std::endl;           // int version
    std::cout << "calc.calculate(5.5, 3.2) = " << calc.calculate(5.5, 3.2) << std::endl; // double version
    std::cout << "calc.calculate(1, 2, 3) = " << calc.calculate(1, 2, 3) << std::endl;    // three-parameter version
    
    std::cout << "\n=== PILLAR 4: ABSTRACTION ===" << std::endl;
    std::cout << "Hide complex details, show only essential features" << std::endl;
    
    Rectangle rect(5.0, 3.0);
    Circle circle(4.0);
    
    // Using abstraction - we don't care about internal implementation
    Shape* shapes[] = {&rect, &circle};
    
    for(int i = 0; i < 2; i++) {
        processShape(shapes[i]);  // Works with any Shape
        std::cout << std::endl;
    }
    
    // Shape shape;  // ERROR! Cannot instantiate abstract class
    
    std::cout << "=== SUMMARY OF 4 PILLARS ===" << std::endl;
    std::cout << "1. ENCAPSULATION: Bundle data + methods, control access" << std::endl;
    std::cout << "2. INHERITANCE:   Child classes inherit from parent classes" << std::endl;
    std::cout << "3. POLYMORPHISM:  Same interface, different implementations" << std::endl;
    std::cout << "4. ABSTRACTION:   Hide complexity, show essential features" << std::endl;
    
    return 0;
}
