#include <iostream>
// namespace = provides a solution for preventing name conflicts in large projects.

namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}
/*int main(){
    int x = 0;
    std::cout << x << std:: endl;
    std::cout << first::x << '\n';
    return 0;
}*/
int main(){
    using namespace first;
    // this will automatically take the variable from first and use it here.
    // just like this using namespace std; is used in global to have ease of not typing std:: again and again because std namespace is a part of iostream.
    // using std::cout; and using std::string will be a good practice because we only using func we need not all.
    std::cout << x<< '\n';
    std::cout << second::x << '\n';
    return 0;
}