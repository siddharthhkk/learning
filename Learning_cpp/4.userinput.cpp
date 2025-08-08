#include <iostream>
#include <cmath>

int main(){
    std::string name; 
    int age;
    std::cout << "What's your name?: ";
    std::getline (std::cin, name);
    std::cout << "What's your age?: ";
    std::cin >> age;
    std::cout << "My name is " << name << " and my age is " << age << '\n';
    // but if i type siddharth sandilaya as an input of name only siddharth will be considered
    /* so we use std::getline (std::cin, name); but but but if any std::cin is used before it, it will take the new line character which is hidden under cin 
     just print out rest of the code without asking user.*/
    // so std::getline(std::cin >> std::ws, name);  ws will eliminate any new lince character.

    //useful math related functions
    double x = 3;
    double y = 4;
    double z;
    //z = std::max(x, y);
    //z = std::min(x, y);
    //from cmath library
    //z = pow(2,4); here 2 to the power 4 will be output.
    //z = abs(5);  here abs will give positive of any input.
    z = sqrt(9);
    //z = round(x);
    std::cout << z << std:: endl;
    return 0;

}