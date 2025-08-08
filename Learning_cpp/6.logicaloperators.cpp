#include <iostream>

int main(){
    // && = AND operator checks if both conditions are true.
    // || = OR operator checks if one of the condition is true.
    // ! = this reverse the logic of anything can be used with != to show not equal.
    bool sunny = true;
    if (!sunny){  // !sunny will mean the if code will run if sunny will return false.
        /*code*/
    }

    //String methords
    std::string name = "Siddharth Sandilaya";
    int length = name.length(); // Returns the length of the string.
    //bool isEmpty = name.empty(); //Returns true if the string is empty.
    if (!name.empty()){
        std::cout << "The string is not empty." << std::endl;
    }
    //name.clear(); // Clears the string.
    //name.erase(0, 5); // Erases the first 5 characters of the string.
    //name.append("@gmail.com"); // Appends the string "@gmail.com" to the end of the string.
    //name.at(0); // Returns the first character of the string, name.at(1) will return the second character.
    //name.insert(0, "Hello "); // Inserts the string "Hello " at the beginning of the string, name.inset(5, " World") will insert " World" at the 5th position.
    //name.find("Siddharth"); // Returns the position of the first occurrence of the string "Siddharth" in the string, if not found it will return std::string::npos.

    while(condition) {// Loop will run until the condition is true.
        // code to be executed
        // the code instide the loop will run until the condition is true.
    }
    do{  //does the code at least once and then checks the condition.
        // code to be executed
    }while(condition) // if true it will run again and again until the condition is false.
    for(int i = 0; i < 10; i++) // Loop will run 10 times.

    //break; - breaks out of loop.
    //continue; - skips the part where continue is applied.
    for(int i = 0; i < 20; i++) {
        if (i == 13) {
            continue; // this will skip 13 from the ouptut and continue from 14 to 20, but if we apply break it will break at 12
        }
    }
    return 0;
}