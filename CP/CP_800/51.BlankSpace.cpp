#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        int a = 0;
        for(int i = 0; i < n; i++){
            int x; 
            cin >> x;
            if(x == 0) {count++; a = max(a, count);}
            else count = 0;
        }
        cout << a << endl;
    }
}