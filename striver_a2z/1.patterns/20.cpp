#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int s = (2*n) - 2;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        for(int j = s; j > 0; j--){
            cout << " ";
        }
        s-=2;
        for(int j =0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    s+=2;
    for(int i = n; i > 1; i--){
        s+=2;
        for(int j = 1; j < i; j++){
            cout << "*";
        }
        for(int j =0; j < s; j++){
            cout << " ";
        }
        for(int j = 1; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
/*    void pattern20(int n) {
        // Initialize spaces between star blocks
        int spaces = 2 * n - 2;

        // Loop for rows
        for (int i = 1; i <= 2 * n - 1; i++) {
            // Calculate stars for first half
            int stars = i;

            // Adjust stars for second half
            if (i > n) stars = 2 * n - i;

            // Print left stars
            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }

            // Print spaces
            for (int j = 1; j <= spaces; j++) {
                cout << " ";
            }

            // Print right stars
            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }

            // Move to next line
            cout << endl;

            // Adjust spaces for next row
            if (i < n) spaces -= 2;
            else spaces += 2;
        }
    }
};*/