#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int s = n - 2*i;    
        if (s > 0){
            for(int j = 0; j < i; j++){
                cout << " ";
            }
            for(int j = 0; j < n - 2*i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
}
/*    void pattern8(int N) {
        // Outer loop for rows
        for (int i = 0; i < N; i++) {
            
            // Print leading spaces (increases with row number)
            for (int j = 0; j < i; j++) {
                cout << " ";
            }

            // Print stars (decreases with row number)
            // Formula: total stars = 2*N - (2*i + 1)
            for (int j = 0; j < 2 * N - (2 * i + 1); j++) {
                cout << "*";
            }

            // Print trailing spaces (same as leading spaces)
            for (int j = 0; j < i; j++) {
                cout << " ";
            }

            // Move to next row
            cout << endl;
        }
    }
};*/