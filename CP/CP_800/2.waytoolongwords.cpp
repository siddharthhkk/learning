#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    while (n--) {
        std::string word;
        std::cin >> word;
        int len = word.length();
        if (len > 10) {
            std::cout << word[0] << len - 2 << word[len-1] <<"\n";
        }
        else if (len <= 10)
            std::cout << word << "\n";
    }
    return 0;
}