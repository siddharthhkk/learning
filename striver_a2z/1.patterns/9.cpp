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
    // Bottom half of the diamond (inverted triangle)
    for(int i = 0; i < n; i++){
        int stars = n - 2*i;
        // Only print spaces if there are stars to follow (prevents trailing whitespace)
        if(stars > 0){
            for(int j = 0; j < i; j++){
                cout << " ";
            }
            for(int j = 0; j < stars; j++){
                cout << "*";
            }
        }
        cout << endl;
    }
}