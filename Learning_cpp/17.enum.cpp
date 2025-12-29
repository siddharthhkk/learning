#include <iostream>
#include <string>

// =========================
// ENUMS (ENUMERATIONS) - Named Constants
// =========================
// technically enums are a way to use strings as integer constants
// BASIC ENUM - represents a set of named integer constants
enum Day {
    MONDAY,     // 0    if you do not specify values, they are assigned automatically
    TUESDAY,    // 1
    WEDNESDAY,  // 2
    THURSDAY,   // 3
    FRIDAY,     // 4
    SATURDAY,   // 5
    SUNDAY      // 6
};

// SCOPED ENUM (enum class) - C++11 - RECOMMENDED!
enum class Color {
    RED,
    GREEN,
    BLUE,
    YELLOW
};

int main() {
    std::cout << "=== ENUM EXPLANATION ===" << std::endl;
    
    // Basic enum usage
    Day today = TUESDAY;
    std::cout << "Today is day number: " << today << std::endl;
    
    // Enum values are integers by default
    std::cout << "MONDAY = " << MONDAY << std::endl;
    std::cout << "SUNDAY = " << SUNDAY << std::endl;
    
    // Using enums in conditions
    if (today == TUESDAY) {
        std::cout << "It's Tuesday!" << std::endl;
    }

    // Scoped enum (better approach)  // you need to use Color:: before the enum name when accessing its values
    Color favoriteColor = Color::BLUE;
    
    /* 
     * WHY static_cast<int> is needed:
     * 
     * Regular enum: Automatically converts to int
     * enum Day { MONDAY };
     * int x = MONDAY;  // ✅ Works automatically
     * 
     * Enum class: Does NOT automatically convert (TYPE SAFETY!)
     * enum class Color { RED };
     * int y = Color::RED;  // ❌ Compilation ERROR!
     * int z = static_cast<int>(Color::RED);  // ✅ Explicit conversion required
     * 
     * This prevents accidental mixing of different enum types:
     * if (MONDAY == Color::RED) // ❌ Would work with regular enum (bad!)
     * if (MONDAY == static_cast<int>(Color::RED)) // ✅ Explicit, clear intent
     */
    
    std::cout << "Favorite color: " << static_cast<int>(favoriteColor) << std::endl;
    
    // Demonstration of the difference:
    std::cout << "\nDemonstration:" << std::endl;
    std::cout << "Regular enum (auto converts): " << TUESDAY << std::endl;  // No cast needed
    // std::cout << "Enum class (needs cast): " << favoriteColor << std::endl;  // ❌ Won't compile!
    std::cout << "Enum class (with cast): " << static_cast<int>(favoriteColor) << std::endl;  // ✅ Works
    
    // Helper function for enum
    switch(today) {
        case MONDAY: 
            std::cout << "Today is Monday" << std::endl;
            break;
        case TUESDAY: 
            std::cout << "Today is Tuesday" << std::endl;
            break;
        case WEDNESDAY: 
            std::cout << "Today is Wednesday" << std::endl;
            break;
        case THURSDAY: 
            std::cout << "Today is Thursday" << std::endl;
            break;
        case FRIDAY: 
            std::cout << "Today is Friday" << std::endl;
            break;
        case SATURDAY: 
            std::cout << "Today is Saturday" << std::endl;
            break;
        case SUNDAY: 
            std::cout << "Today is Sunday" << std::endl;
            break;
        default: 
            std::cout << "Unknown day" << std::endl;
    }

    return 0;
}
