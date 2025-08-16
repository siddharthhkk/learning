#include <iostream>

class sexy {
    private:
        int x = 0;  // PRIVATE: Only accessible within this class, not from main() or other classes
    
    public:
        // Default constructor - creates object with x = 0
        sexy() {}
        
        // Parameterized constructor - sets initial value
        sexy(int x) {
            this->x = x;  // ✅ ALLOWED: Accessing private 'x' from WITHIN the same class
            // Alternative: you could use setX(x) here for validation
            std::cout << "Value set to: " << x << std::endl;
        }
        
        // GETTER: Public method to READ private data from OUTSIDE the class
        int getX() {
            return x;
        }
        
        // SETTER: Public method to MODIFY private data from OUTSIDE the class (with validation)
        int setX(int x) {
            if(x < 100) {
                this->x = x;  // ✅ ALLOWED: Accessing private 'x' from WITHIN the same class
                return this->x;  // Return new value
            } else {
                // Reject invalid values (≥100)
                std::cout << "Error: Value must be < 100. Keeping old value." << std::endl;
                return this->x;  // Return unchanged value
            }
        }   
};

int main() {
    // Creating object using default constructor
    sexy s;  // x = 0 (default)
    
    // Using setter to modify private member (with validation)
    s.setX(12);  // ✅ WORKS: Using public method to access private data
    
    // Using getter to read private member
    std::cout << "Current value: " << s.getX() << std::endl;  // ✅ WORKS: Using public method
    
    // This would NOT work:
    // std::cout << s.x;  // ❌ ERROR: Cannot access private member directly from main()
    
    return 0;
}