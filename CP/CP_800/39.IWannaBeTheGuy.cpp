#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<bool> ans(n+1, false);
    int p,q;
    cin >> p;
    for(int i = 0; i < p; i++){
        int x;
        cin >> x;
        ans[x] = true;
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        ans[x] = true;
    }
    for(int i = 1; i <= n; i++){
        if(!ans[i]) {cout << "Oh, my keyboard!\n"; return 0;}
    }
    cout << "I become the guy.\n";
}