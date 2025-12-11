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