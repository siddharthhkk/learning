#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = 2* (n-1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int j = 0; j < x; j++){
            cout << " ";
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
        x-=2;
    }
}