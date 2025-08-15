#include <iostream>
#include <string>
#include <vector>

// =========================
// FUNCTION OVERLOADING vs FUNCTION TEMPLATES
// =========================

// APPROACH 1: FUNCTION OVERLOADING (The Old Way)
// You have to write separate functions for each type
int getMax(int a, int b) {
    std::cout << "Called int version" << std::endl;
    return (a > b) ? a : b;
}

double getMax(double a, double b) {
    std::cout << "Called double version" << std::endl;
    return (a > b) ? a : b;
}

float getMax(float a, float b) {
    std::cout << "Called float version" << std::endl;
    return (a > b) ? a : b;
}

std::string getMax(const std::string& a, const std::string& b) {
    std::cout << "Called string version" << std::endl;
    return (a > b) ? a : b;
}

// What about char? long? long long? unsigned int? 
// You'd need to write DOZENS of functions!
// char getMax(char a, char b) { return (a > b) ? a : b; }
// long getMax(long a, long b) { return (a > b) ? a : b; }
// ... and so on for every type you might use!

// APPROACH 2: FUNCTION TEMPLATE (The Modern Way)
// Write ONE function that works with ANY type
template<typename T>
T getMaxTemplate(T a, T b) {
    std::cout << "Called template version with type: " << typeid(T).name() << std::endl;
    return (a > b) ? a : b;
}

int main() {
    std::cout << "=== FUNCTION OVERLOADING vs TEMPLATES COMPARISON ===\n" << std::endl;
    
    // =========================
    // PROBLEM 1: CODE DUPLICATION
    // =========================
    std::cout << "1. CODE DUPLICATION PROBLEM:" << std::endl;
    std::cout << "With overloading, you copy the same logic multiple times!" << std::endl;
    
    std::cout << "\nUsing overloaded functions:" << std::endl;
    std::cout << "Max of 5, 10: " << getMax(5, 10) << std::endl;
    std::cout << "Max of 3.14, 2.71: " << getMax(3.14, 2.71) << std::endl;
    
    std::cout << "\nUsing template (same logic, works for any type):" << std::endl;
    std::cout << "Max of 5, 10: " << getMaxTemplate(5, 10) << std::endl;
    std::cout << "Max of 3.14, 2.71: " << getMaxTemplate(3.14, 2.71) << std::endl;
    
    return 0;
}
