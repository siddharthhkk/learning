#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < x; j++){
            cout << "*";
        } 
        x += 1;
        cout << endl;
    }
}
/*#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to print Pattern 2
    void pattern2(int N) {
        // Loop for rows
        for (int i = 0; i < N; i++) {
            // Loop for columns (stars in each row)
            for (int j = 0; j <= i; j++) {
                cout << "* ";
            }
            // Move to next line after each row
            cout << endl;
        }*/