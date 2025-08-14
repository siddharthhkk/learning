#include <iostream>
#include <string>

int main() {
    //user inputs in the array.
    int n;
    std::cout << "Enter no. of inputs: ";
    std::cin >> n;
    std::cin.ignore(); // Clear the newline character left in the input buffer getline reads \n of cin, or you can just make std::getline (std::cin, n);
    std::string arr[n];
    for (int i = 0; i < n; i++){
        std::cout << "Enter car name " << i + 1 << ": ";
        std::getline(std::cin, arr[i]);
        if (arr[i] == "q") {
            break; // when user inputs "q", the loop will break and stop asking for further input. but q will be stored in array.
        }
    }
    for (int i = 0; i < n; i++){
        std::cout << arr[i] << "\n";
    }
}