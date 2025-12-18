#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = (n - 1)/2;
    for(int i = 1; i <= n; i += 2){
        for(int j = 0; j < x; j++){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
                cout << "*";
        }
        cout << endl;
        x--;
    }
}
/*class Solution {
public:
    void pattern7(int N) {
        for (int i = 0; i < N; i++) {
            
            // Print leading spaces (N - i - 1 spaces)
            for (int j = 0; j < N - i - 1; j++) {
                cout << " ";
            }

            // Print stars (2*i + 1 stars)
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }

            // Print trailing spaces (optional, same count as leading spaces)
            for (int j = 0; j < N - i - 1; j++) {
                cout << " ";
            }

            // Move to next row
            cout << endl;
        }
    }
};*/