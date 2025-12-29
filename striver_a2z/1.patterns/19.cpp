#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int s = 0;
    for(int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout << "*";
        }
        for(int j =0; j < s; j++){
            cout << " ";
        }
        s+=2;
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        s-=2;
        for(int j = 0; j < s; j++){
            cout << " ";
        }
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
/*public:
    // Function to print Pattern 19
    void pattern19(int N) {
        // Initial spaces for upper half
        int iniS = 0;

        // Loop for upper half rows
        for (int i = 0; i < N; i++) {
            // Print stars on left
            for (int j = 1; j <= N - i; j++) {
                cout << "*";
            }
            // Print spaces in middle
            for (int j = 0; j < iniS; j++) {
                cout << " ";
            }
            // Print stars on right
            for (int j = 1; j <= N - i; j++) {
                cout << "*";
            }
            // Increase middle spaces by 2
            iniS += 2;
            // Move to next row
            cout << endl;
        }

        // Initial spaces for lower half
        iniS = 2 * N - 2;

        // Loop for lower half rows
        for (int i = 1; i <= N; i++) {
            // Print stars on left
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            // Print spaces in middle
            for (int j = 0; j < iniS; j++) {
                cout << " ";
            }
            // Print stars on right
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            // Decrease middle spaces by 2
            iniS -= 2;
            // Move to next row
            cout << endl;
        }
    }
};*/