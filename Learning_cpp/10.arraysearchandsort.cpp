#include <iostream>
using namespace std;

int search(int age[], int size, int myage1);
void bubblesort(int array[], int size);

int main() {
    int age[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int myage1;
    int size = sizeof(age) / sizeof(int);
    cout << "Enter your age: ";
    cin >> myage1;
    int respond = search(age, size, myage1);
    if(respond != -1)
        cout << "Your age is in " << respond << "'th index \n";
    else
        cout << "Your age is not in the array\n";

    //bubble sort
    int array[] = {64, 34, 25, 12, 22, 11, 90, 5, 77, 30};
    int size1 = sizeof(array) / sizeof(array[0]);
    cout << "{ ";
    for (int i = 0; i < size1; i++)
        cout << array[i] << ", ";
    cout << "}";
    bubblesort(array, size1);
    cout << "\nSorted array: { ";
    for (int i = 0; i < size1; i++)
        cout << array[i] << ", ";
    cout << "}\n";

    //fill() - fill func is used to fill an array with a specific value.   fill(start, end, value);
    int arr[10];
    fill(arr, arr + 10, 5);    // this will fill the entire array from 0 to 10th element with 5.
    fill(arr + 2, arr + 5, 10); // this will fill the array from 2nd to 5th element with 10.
    fill(arr + 6, arr + 8, 15); // this will fill the array from 6th to 8th element with 15.
}

int search(int age[], int size, int myage1) {
    for (int i = 0; i < size; i++) {
        if ( age[i] == myage1)
            return i;
    }
    return -1;  
}

void bubblesort(int array[], int size) {
    int temp;
    for (int j = 0; j < size - 1; j++) {
        for(int i = 0; i < size - 1 - j; i++) { // -j is to avoid checking already sorted elements.
            if (array[i] > array[i + 1]) {      // as the inside loop will send the largest number to the end we do not need to check it again.
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}