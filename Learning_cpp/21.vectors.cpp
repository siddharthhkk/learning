#include <iostream>
#include <vector>
#include <algorithm>  // For sort, find, etc.

// VECTORS: Dynamic arrays that can grow and shrink automatically
// Think of them as smart arrays that manage their own memory

int main() {
    std::cout << "=== VECTOR BASICS ===" << std::endl;
    
    // 1. CREATING VECTORS
    std::vector<int> numbers;                    // Empty vector
    std::vector<int> nums = {1, 2, 3, 4, 5};   // Initialize with values
    std::vector<int> zeros(5, 0);               // 5 elements, all zeros: {0,0,0,0,0}
    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};
    
    std::cout << "Initial nums: ";
    for(int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    std::cout << "\n=== ADDING ELEMENTS ===" << std::endl;
    
    // 2. ADDING ELEMENTS
    numbers.push_back(10);    // Add to end: {10}
    numbers.push_back(20);    // Add to end: {10, 20}
    numbers.push_back(30);    // Add to end: {10, 20, 30}
    
    std::cout << "After push_back: ";
    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Insert at specific position
    numbers.insert(numbers.begin() + 1, 15);  // Insert 15 at position 1: {10, 15, 20, 30}
    
    std::cout << "After insert: ";
    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    std::cout << "\n=== ACCESSING ELEMENTS ===" << std::endl;
    
    // 3. ACCESSING ELEMENTS
    std::cout << "First element: " << nums[0] << std::endl;           // Array-style access
    std::cout << "First element: " << nums.at(0) << std::endl;       // Safe access (bounds checking)
    std::cout << "Front: " << nums.front() << std::endl;             // First element
    std::cout << "Back: " << nums.back() << std::endl;               // Last element
    
    // Safe access with bounds checking
    try {
        std::cout << "Element at index 10: " << nums.at(10) << std::endl;  // Will throw exception
    } catch(const std::out_of_range& e) {
        std::cout << "Index 10 is out of range!" << std::endl;
    }
    
    std::cout << "\n=== VECTOR SIZE AND CAPACITY ===" << std::endl;
    
    // 4. SIZE AND CAPACITY
    std::cout << "Size: " << nums.size() << std::endl;           // Number of elements
    std::cout << "Capacity: " << nums.capacity() << std::endl;   // How many it can hold without reallocation
    std::cout << "Empty? " << nums.empty() << std::endl;         // Is it empty?
    std::cout << "Max size: " << nums.max_size() << std::endl;   // Maximum possible size
    
    // Reserve space to avoid reallocations
    numbers.reserve(100);  // Reserve space for 100 elements
    std::cout << "After reserve(100), capacity: " << numbers.capacity() << std::endl;
    
    std::cout << "\n=== MODIFYING ELEMENTS ===" << std::endl;
    
    // 5. MODIFYING ELEMENTS
    nums[1] = 99;  // Change second element
    std::cout << "After nums[1] = 99: ";
    for(int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    std::cout << "\n=== REMOVING ELEMENTS ===" << std::endl;
    
    // 6. REMOVING ELEMENTS
    nums.pop_back();  // Remove last element
    std::cout << "After pop_back(): ";
    for(int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Erase specific element
    nums.erase(nums.begin() + 1);  // Remove element at position 1
    std::cout << "After erase(position 1): ";
    for(int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Clear all elements
    std::vector<int> temp = {1, 2, 3};
    temp.clear();
    std::cout << "After clear(), size: " << temp.size() << std::endl;
    
    std::cout << "\n=== ITERATING THROUGH VECTORS ===" << std::endl;
    
    // 7. DIFFERENT WAYS TO ITERATE
    std::vector<int> data = {10, 20, 30, 40, 50};
    
    // Method 1: Range-based for loop (C++11)
    std::cout << "Range-based for: ";
    for(int value : data) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    
    // Method 2: Traditional for loop
    std::cout << "Traditional for: ";
    for(size_t i = 0; i < data.size(); i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
    
    // Method 3: Iterators
    std::cout << "Using iterators: ";
    for(auto it = data.begin(); it != data.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    std::cout << "\n=== VECTOR ALGORITHMS ===" << std::endl;
    
    // 8. COMMON ALGORITHMS
    std::vector<int> unsorted = {5, 2, 8, 1, 9, 3};
    
    std::cout << "Original: ";
    for(int num : unsorted) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Sort
    std::sort(unsorted.begin(), unsorted.end());
    std::cout << "After sort: ";
    for(int num : unsorted) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Find element
    auto found = std::find(unsorted.begin(), unsorted.end(), 8);
    if(found != unsorted.end()) {
        std::cout << "Found 8 at position: " << (found - unsorted.begin()) << std::endl;
    }
    
    // Reverse
    std::reverse(unsorted.begin(), unsorted.end());
    std::cout << "After reverse: ";
    for(int num : unsorted) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    std::cout << "\n=== 2D VECTORS (VECTOR OF VECTORS) ===" << std::endl;
    
    // 9. 2D VECTORS
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    std::cout << "2D Vector (3x3 matrix):" << std::endl;
    for(size_t i = 0; i < matrix.size(); i++) {
        for(size_t j = 0; j < matrix[i].size(); j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    // Create empty 2D vector and resize
    std::vector<std::vector<int>> grid;
    grid.resize(3);  // 3 rows
    for(auto& row : grid) {
        row.resize(4, 0);  // 4 columns, filled with 0
    }
    
    std::cout << "\nEmpty 3x4 grid:" << std::endl;
    for(const auto& row : grid) {
        for(int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "\n=== VECTOR VS ARRAY COMPARISON ===" << std::endl;
    
    // 10. VECTOR ADVANTAGES OVER ARRAYS
    std::cout << "Vector advantages:" << std::endl;
    std::cout << "- Dynamic size (can grow/shrink)" << std::endl;
    std::cout << "- Automatic memory management" << std::endl;
    std::cout << "- Built-in size() function" << std::endl;
    std::cout << "- Range checking with at()" << std::endl;
    std::cout << "- Works with STL algorithms" << std::endl;
    std::cout << "- Exception safety" << std::endl;
    
    return 0;
}
