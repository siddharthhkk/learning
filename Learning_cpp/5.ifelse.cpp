#include <iostream>

int main(){
    if (condition) {

    }
    else if (condition) {

    }
    else {

    }
    // if you have two conditions like x >= 18 and x >= 100 then the statement which was written first will be considered.
    
    // Switch = alternative of using many else if  statements.
    int month
    std::cout << "Enter a month: \n";
    std::cin >> month;
    switch (month){
    case 1:
        std::cout << "January"
        break;
    case 2:
        std::cout << "February"
        break;
    //till case 12 then if no case match we will use default case.
    default:
        std::cout << "enter between 1 to 12";
        break;
    }
    switch (grade)
    {
    case 'A':
        std::cout << "you did great";
        break;
    case 'B':
        break;
    default:
        break;
    }   

    // Ternary operator  ? is used as an replacement to an if/else statement.
    int grade = 75;
    if (grade >= 60) {
        std::cout << "Pass\n";
    }
    else {
        std::cout << "fail\n";
    }
    //this could be also written as
    condition ? true statement : false statement.
    grade >= 60 ? std::cout << "Pass\n"; std::cout << "Fail\n";
}