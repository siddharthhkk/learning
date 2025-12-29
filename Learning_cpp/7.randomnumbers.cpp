//Learing how to create random numbers and about functions.
#include <iostream>
#include <ctime>

void happybirthday(std::string sexyboi,int luck,int n);

int main() {
    // Seed the random number generator with the current time
    srand(time(0));
    int num1 = rand() % 100 + 1;  // Generate a random number between 1 and 100. + 1 helps with ensuring the number is not 0.
    std::cout << "Random number: " << num1 << std::endl;
    std::string name;
    int n;
    std::cout << "Enter Birthday Boy's name: ";
    std::cin >> name;
    std::cout << "how many times you want to say happy birthday: ";
    std::cin >> n;
    happybirthday(name, num1, n);
    return 0;
}

void happybirthday(std::string sexyboi, int luck, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "Happy Birthday " << sexyboi << "\n Today's Lucky number is: " << luck << '\n';
    }
}