#include <iostream>
using namespace std;

int search(int age[], int size, int myage);

int main() {
    int age[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int myage;
    int size = sizeof(age) / sizeof(int);
    cout << "Enter your age: ";
    cin >> myage;
    int respond = search(age, size, myage);
    if(respond != -1)
        cout << "Your age is in " << respond << "'th index \n";
    else
        cout << "Your age is not in the array\n";

}

int search(int age[], int size, int myage) {
    for (int i = 0; i < size; i++) {
        if ( age[i] == myage)
            return i;
    }
    return -1;  
}
