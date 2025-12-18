#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p_n = n*2 - 1;
    for(int i = 0; i < p_n; i++){
        if(i == 1 || i == p_n -1){
            for(int j = 0; j < p_n; j++){
                cout << n;
            }
        }
        else{
            cout << " ";
        }
        cout << endl;
    }
}
/*for (int i = 0; i < 2 * n - 1; i++) {
            // Inner loop for columns
            for (int j = 0; j < 2 * n - 1; j++) {
                // Calculate distance from top
                int top = i;
                // Calculate distance from left
                int left = j;
                // Calculate distance from bottom
                int bottom = (2 * n - 2) - i;
                // Calculate distance from right
                int right = (2 * n - 2) - j;

                // Take the minimum of all four distances
                int minDist = min(min(top, bottom), min(left, right));

                // Print number (starts with n at border, decreases inside)
                cout << (n - minDist) << " ";
            }
            // Move to the next row
            cout << endl;
        }*/