#include <iostream>
#include <string>

int main() {
    int n,X = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        if (str == "++X" || str == "X++") {
            X++;
        }
        else if (str == "--X" || str == "X--") {
            X--;
        }
    }
    std::cout << X << std::endl;
}