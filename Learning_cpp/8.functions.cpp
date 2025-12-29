#include <iostream>

int areaa(int nana);
int x = 2;

int main() {
    int n = 12; 
    std::cout << "Area: " << areaa(n) << std::endl;
    int x = 1;
    std::cout << ::x << std::endl;
}

int areaa(int nana) {
    int area = nana*nana;
    return area;
    // or just return nana*nana;  
}

// Function overloading happens when two or more functions have the same name but different parameters. but if they have same
// number of parameters and name, it will result in an error.
int areaa(int nana, int multiplier) {
    return nana * nana * multiplier;
}
// Global variables are declared outside of any function and can be accessed from any function in the same file.
// Local variables are declared within a function and can only be accessed within that function.
// if there is a global variable and a local variable with the same name, the local variable will take precedence within its scope,
// but if you want to use global variable instead of local variable, you can use the scope resolution operator (::).
// you should avoid using global variables when possible, as they can make code harder to understand and maintain.