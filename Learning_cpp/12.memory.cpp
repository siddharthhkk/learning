#include <iostream>
//reference variables are used to create an alias for another variable.
// they allow you to refer to a variable by another name, without creating a new variable.
// so if you change the value of the reference variable, it will change the value of the original variable as well.
void swap(int &a, int &b) {  // if i don't add '&', it will pass by value and not by reference.
    int temp = a;           // normally when value is passed it creates a copy and changes are not reflected outside.
    a = b;                  // thats why we use reference variables, by passing their addresses, so that the changes are reflected on the original variables.
    b = temp;
}

int main() {
    // memory address is the location where data is stored.
    // memory address can be accessed with '&' (address-of operator)
    int sexy = 1;
    std::string str = "main";
    std::cout << &sexy << std::endl << &str << std::endl; // for string it prints the address of the first character and not the whole string.
    // passing by reference
    int sexy2 = 2;
    swap(sexy, sexy2);
    std::cout << "sexy: " << sexy << std::endl << "sexy2: " << sexy2 << std::endl;
    // const is used to make a variable read-only
    const int &sexy3 = sexy; // here i am creating a reference not a new variable,
                             // so sexy3 will point to the same memory location as sexy. saving memory.
    // sexy3 = 3; // this will give an error because sexy3 is a reference to a const int.
}