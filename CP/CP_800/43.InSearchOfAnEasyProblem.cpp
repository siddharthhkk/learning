#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 1){
            cout << "HARD\n";
            count++;
            break;
        }
    }
    if(count == 0) cout << "EASY\n";
}