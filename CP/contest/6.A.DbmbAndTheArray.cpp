#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s, x;
        cin >> n >> s >> x;
        int arrsum = 0;
        vector <int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            arrsum+= v[i];
        }
        while(arrsum < s){
            arrsum += x;
        }
        if(arrsum == s) cout << "YES\n";
        else cout << "NO\n";
    }
}