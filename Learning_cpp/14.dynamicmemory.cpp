#include <iostream>

int main() {
    // =========================
    // DYNAMIC MEMORY ALLOCATION
    // =========================
    // memory is allocated after the program is compiled and running, use the 'new' operator to allocate memory in the heap rather than the stack.
    // This allows you to allocate memory at runtime, which is useful for dynamic data structures like linked lists, trees, etc.
    // useful when we don't know how much memory we will need at compile time, makes program more flexible when accepting user input.
    // 1. Allocating single variable
    int* pInt = NULL;
    pInt = new int;  // Dynamically allocate an int
    *pInt = 42;
    std::cout << "Dynamically allocated int: " << *pInt << std::endl;

    // 2. Allocating array
    int* pArray = NULL;
    pArray = new int[5];  // Dynamically allocate an array of 5 ints
    for (int i = 0; i < 5; i++) {
        pArray[i] = i * 10;
    }
    std::cout << "Dynamically allocated array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << pArray[i] << " ";
    }
    std::cout << std::endl;

    // 3. Deallocating memory
    delete pInt;          // Free single variable so it doesn't leak
    delete[] pArray;     // Free array

    // =========================
    // RECURSION - A function that calls itself
    // =========================
    
    std::cout << "\n=== RECURSION EXPLAINED ===" << std::endl;
    
    // Recursion has 2 essential parts:
    // 1. BASE CASE - condition to stop recursion (prevents infinite loop)
    // 2. RECURSIVE CASE - function calls itself with modified parameters
    
    // Example 1: Factorial (n! = n × (n-1) × (n-2) × ... × 1)
    auto factorial = [](int n) -> int {
        std::cout << "factorial(" << n << ") called" << std::endl;
        
        // BASE CASE: Stop when n <= 1
        if (n <= 1) {
            std::cout << "Base case reached: returning 1" << std::endl;
            return 1;
        }
        
        // RECURSIVE CASE: n * factorial(n-1)
        int result = n * factorial(n - 1);
        std::cout << "factorial(" << n << ") = " << n << " * factorial(" << (n-1) << ") = " << result << std::endl;
        return result;
    };
    
    std::cout << "\nCalculating factorial of 5:" << std::endl;
    int fact5 = factorial(5);
    std::cout << "Final result: 5! = " << fact5 << std::endl;
    
    // Example 2: Fibonacci sequence (0, 1, 1, 2, 3, 5, 8, 13...)
    // Each number is sum of previous two: fib(n) = fib(n-1) + fib(n-2)
    auto fibonacci = [](int n) -> int {
        std::cout << "fib(" << n << ") ";
        
        // BASE CASES: fib(0) = 0, fib(1) = 1
        if (n <= 1) {
            std::cout << "= " << n << " (base case)" << std::endl;
            return n;
        }
        
        // RECURSIVE CASE: fib(n-1) + fib(n-2)
        std::cout << "= fib(" << (n-1) << ") + fib(" << (n-2) << ")" << std::endl;
        return fibonacci(n - 1) + fibonacci(n - 2);
    };
    
    std::cout << "\nCalculating fibonacci of 6:" << std::endl;
    int fib6 = fibonacci(6);
    std::cout << "Final result: fib(6) = " << fib6 << std::endl;
    
    // Example 3: Countdown (simple recursion)
    auto countdown = [](int n) -> void {
        // BASE CASE: Stop at 0
        if (n <= 0) {
            std::cout << "Blast off! 🚀" << std::endl;
            return;
        }
        
        // Print current number
        std::cout << n << "... ";
        
        // RECURSIVE CASE: countdown with n-1
        countdown(n - 1);
    };
    
    std::cout << "\nCountdown from 5:" << std::endl;
    countdown(5);
    
    // Example 4: Sum of array using recursion
    auto sumArray = [](int arr[], int size) -> int {
        // BASE CASE: Empty array
        if (size <= 0) return 0;
        
        // RECURSIVE CASE: first element + sum of rest
        return arr[0] + sumArray(arr + 1, size - 1);
    };
    
    int numbers[] = {1, 2, 3, 4, 5};
    std::cout << "\nSum of array {1,2,3,4,5}: " << sumArray(numbers, 5) << std::endl;
    
    /*
     * HOW RECURSION WORKS (Call Stack):
     * 
     * When factorial(5) is called:
     * 1. factorial(5) calls factorial(4)
     * 2. factorial(4) calls factorial(3)  
     * 3. factorial(3) calls factorial(2)
     * 4. factorial(2) calls factorial(1)
     * 5. factorial(1) returns 1 (base case)
     * 6. factorial(2) returns 2 * 1 = 2
     * 7. factorial(3) returns 3 * 2 = 6
     * 8. factorial(4) returns 4 * 6 = 24
     * 9. factorial(5) returns 5 * 24 = 120
     * 
     * Think of it like Russian nesting dolls - each function call
     * contains smaller versions of itself until you reach the smallest one.
     * 
     * RECURSION vs LOOPS:
     * - Recursion: More elegant for problems with self-similar structure
     * - Loops: Usually more memory efficient (no function call overhead)
     * - Some problems are naturally recursive (tree traversal, fractals)
     */

    return 0;
}