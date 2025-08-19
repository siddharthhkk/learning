#include <iostream>

int main() {
    int w;
    std::cin >> w;
    if (w % 2 == 0 && w > 2) { 
        std::cout << "YES" << '\n';
    } 
    else {
        std::cout << "NO" << '\n';
    }
    return 0;
}