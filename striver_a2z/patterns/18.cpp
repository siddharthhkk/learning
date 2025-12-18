#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = i; j >= 0; j--){
            cout << (char)('E' - j);
            }
        cout << endl;
    }
}
/*class Solution {
public:
    // Function to print Pattern 18
    void pattern18(int N) {
        // Loop for each row
        for (int i = 0; i < N; i++) {
            // Print characters from ('A' + N - 1 - i) to ('A' + N - 1)
            for (char ch = ('A' + N - 1) - i; ch <= ('A' + N - 1); ch++) {
                cout << ch << " ";
            }
            // Move to next line after each row
            cout << endl;
        }
    }
};*/