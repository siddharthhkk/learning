#include <iostream>
#include <string>

int main() {
    //user inputs in the array.
    int n;
    std::cout << "Enter no. of inputs: ";
    std::cin >> n;
    std::cin.ignore(); // Clear the newline character left in the input buffer getline reads \n of cin, or you can just make std::getline (std::cin, n);
    std::string arr[n];
    std::string temp[n]; // temporary stores input if user enters a valid car name we will pass it to the arr,
                         // but if user enters "q" we will stop asking for further input.
    for (int i = 0; i < n; i++){
        std::cout << "Enter car name or q to quit " << i + 1 << ": ";
        std::getline(std::cin, temp[i]);
        if (temp[i] == "q") {
            break;      // when user inputs "q", the loop will break and stop asking for further input. but q will also be stored in arr.
        }
        else {
            arr[i] = temp[i]; // if user enters a valid car name we will pass it to the arr.
        }
    }
    for (int i = 0; i != arr[i].empty(); i++){    // we will check arr[] for empty space so that we don't print the extra empty space
        std::cout << arr[i] << "\n";
    }
    // We'll learn about dynamic arrays and vectors in future, so that we dn't need to ask user for array size or hardcode it.

    //2d array -> array[rows][columns] you can just write columns, rows will be variable.
    std::string array[][3] = {{"Sexy", "Main", "Hehe"}, {"goated", "maingoated", "secondgoated"}, {"thirdrow", "secondcolumn", "third"}};
    for (int i = 0; i < 3; i++) { // we want to print this 3X3 2d array as a matrix.
        for (int j = 0; j < 3; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}