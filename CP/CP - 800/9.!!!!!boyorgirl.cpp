#include <bits/stdc++.h>

int main() {
    std::string name;
    std::cin >> name;
    std::set<char> x;
    for (int i = 0, size = name.length(); i < size; i++) {
        x.insert(name[i]);
    }
    x.size() % 2 == 0 ? std::cout << "CHAT WITH HER!\n" : std::cout << "IGNORE HIM!\n";
}