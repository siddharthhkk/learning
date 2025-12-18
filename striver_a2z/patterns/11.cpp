#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <=n; i++){
        int x = 0;
        if(i % 2 == 0){x = 0;}
        else{x = 1;}
        for(int j = 0; j < i; j++){
            cout << x;
            x = 1-x;
        }
        cout << endl;
    }
}