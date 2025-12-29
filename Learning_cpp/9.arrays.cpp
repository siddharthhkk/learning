#include <iostream>
#include <string>

double gettotal(double prices[], int size);

int main() {
    std::string cars[] = {"Toyota", "Honda", "Ford", "BMW", "Audi"};

    //or you can do
    std::string cars2[5];
    cars2[0] = "Toyota";
    cars2[1] = "Honda";
    cars2[2] = "Ford";
    cars2[3] = "BMW";
    cars2[4] = "Audi";

    // to access a specific element of the array, you can use the index of the element
    std::cout << cars[0] << std::endl;  // Outputs "Toyota"

    //size of() determines the size in bytes of a variable, datatype, class, or object
    double gpa = 3.75;
    std::cout << "Size of double: " << sizeof(gpa) << " bytes" << std::endl;
    char grade = 'A';
    std::cout << "Size of char: " << sizeof(grade) << " bytes" << std::endl;
    bool isPassed = true;
    std::cout << "Size of bool: " << sizeof(isPassed) << " bytes" << std::endl << std::endl;

    char name[5];  //when initializing a array it allocates the memory as per the given data type.
    std::cout << "Size of char array is: " << sizeof(name) << " bytes" << std::endl;
    // you can use cars.size() ifthe array is initialzed by a vector or array class 
    // array<int,5> cars = {1,2,3,4,5}; requires #include <array>

    // when trying to find the size of an array, it gives the size in bytes of the array, not the number of elements in the array.
    // to find the number of elements in the array, you can divide the total size of the array by the size of data type of the elements.
    std::cout << "Number of elements in cars: " << sizeof(cars) / sizeof(std::string) << std::endl << std::endl;

    // Iterate over an array
    for (int i = 0; i < sizeof(cars) / sizeof(std::string); i++) {  // we don't hardcode the size of the array because it can change
        std::cout << cars[i] << std::endl;
    }
    std::cout << std::endl;

    // Using range-based for loop to iterate over the array
    // foreach loop is a more modern and cleaner way to iterate over arrays in C++.
    for (std::string car : cars) {
        std::cout << car << std::endl;  // range-based for loop to iterate over the array
    }
    std::cout << std::endl;
    // Passing array to a function
    double prices[] = {19999.99, 24999.99, 29999.99, 39999.99, 49999.99};
    int size = sizeof(prices) / sizeof(double);
    double total = gettotal(prices, size); // we can pass an array by just writing array name no need of [] with it.
    std::cout << "Total: " << total << std::endl; 

    return 0;
}

double gettotal( double prices[], int size) { //when we pass an array to a function, we pass the address of the first element of the array, not the entire array.
    double sum = 0;                 // so we need to know the size of the array so we can hardcode it, or pass the size of the array as an additional parameter.
    for (int i = 0; i < size; i++) {
        sum += prices[i];
    }
    return sum;
}
