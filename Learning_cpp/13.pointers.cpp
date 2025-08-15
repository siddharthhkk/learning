#include <iostream>

int main() {
    // =========================
    // BASIC POINTER CONCEPTS
    // =========================
    
    // 1. Regular variable
    int age = 21;
    std::cout << "=== Basic Variable ===" << std::endl;
    std::cout << "age = " << age << std::endl;
    std::cout << "address of age = " << &age << std::endl;
    
    // 2. Pointer declaration and initialization
    int* agePtr = &age;  // agePtr stores the address of age
    std::cout << "\n=== Pointer Basics ===" << std::endl;
    std::cout << "agePtr (address it stores) = " << agePtr << std::endl;
    std::cout << "*agePtr (value at that address) = " << *agePtr << std::endl;
    std::cout << "&agePtr (address of pointer itself) = " << &agePtr << std::endl;
    
    // 3. Modifying through pointer
    std::cout << "\n=== Modifying Through Pointer ===" << std::endl;
    *agePtr = 25;  // Changes the value of age through the pointer
    std::cout << "After *agePtr = 25:" << std::endl;
    std::cout << "age = " << age << std::endl;        // age is now 25!
    std::cout << "*agePtr = " << *agePtr << std::endl;
    
    // =========================
    // POINTER ARITHMETIC
    // =========================
    
    std::cout << "\n=== Pointer Arithmetic ===" << std::endl;
    int numbers[] = {10, 20, 30, 40, 50};
    int* numPtr = numbers;  // Points to first element (same as &numbers[0])
    
    /* 
     * Why we use 'numbers' instead of '&numbers':
     * - Array names automatically "decay" to pointers to their first element
     * - 'numbers' gives us int* pointing to numbers[0]
     * - '&numbers[0]' would do the same thing (explicit address of first element)
     * - '&numbers' would give us a pointer to the ENTIRE array (type: int(*)[5])
     *   which points to the same address but represents the whole array, not just first element
     * 
     * This is why we can do pointer arithmetic with 'numbers':
     * numbers + 1 = address of numbers[1]
     * numbers + 2 = address of numbers[2], etc.
     */
    
    std::cout << "Array: ";
    for(int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Using pointer arithmetic:" << std::endl;
    for(int i = 0; i < 5; i++) {
        std::cout << "*(numPtr + " << i << ") = " << *(numPtr + i) << std::endl; // Accessing array elements
    }
    
    // =========================
    // NULL POINTERS - pointer is not pointing at anything
    // =========================
    
    std::cout << "\n=== Null Pointers ===" << std::endl;
    int* nullPtr = nullptr;  // C++11 way
    // int* nullPtr = NULL;   // Old C way
    // int* nullPtr = 0;      // Also valid but not recommended
    
    if (nullPtr == nullptr) {
        std::cout << "nullPtr is null - safe to check before using!" << std::endl;
    } // null pointer is used to avoid dereferencing a null pointer cause if you dereference a null pointer,
    // it will lead to undefined behavior.

    // =========================
    // PRACTICAL EXAMPLE: SWAP FUNCTION
    // =========================
    
    std::cout << "\n=== Swap Function with Pointers ===" << std::endl;
    int a = 100, b = 200;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    
    // Swap function using pointers
    auto swap = [](int* x, int* y) {
        int temp = *x;
        *x = *y;
        *y = temp;
    };
    
    swap(&a, &b);  // Pass addresses
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    
    // =========================
    // COMMON MISTAKES TO AVOID
    // =========================
    
    std::cout << "\n=== Common Mistakes Demo ===" << std::endl;
    
    // 1. Uninitialized pointer (dangerous!)
    // int* badPtr;  // Contains garbage address
    // std::cout << *badPtr;  // CRASH! Don't do this
    
    // 2. Always initialize pointers
    int* goodPtr = nullptr;  // Safe initialization
    if (goodPtr != nullptr) {
        std::cout << *goodPtr;  // Won't execute, safe
    } else {
        std::cout << "Pointer is null, not dereferencing" << std::endl;
    }
    
    return 0;
}
