#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 1;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= x; j++){
            cout << j;
        }
        x++;
        cout << endl;
    }
}
/*#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to print the number pattern
    void pattern3(int N) {
        // Outer loop for rows
        for (int i = 1; i <= N; i++) {
            // Inner loop for columns
            // Print numbers from 1 to i
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            // Move to the next row
            cout << endl;
        }
    }
};
*/