#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        for(int i = 0; i  < n; i++) cin >> a[i];
        vector <int> b = a;
        sort(b.begin(), b.end());
        bool x = true;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]) x = false;
        }
        if(k>=2) cout << "YES\n";
        else if(k==1){
            if(x) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}