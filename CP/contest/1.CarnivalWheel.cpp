#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int l, a, b;
        cin >> l >> a >> b;
        int x = 0;
        for(int i = 1; i <= min(l, b); i++){
            if(l%i == 0 && b%i == 0) x = i;
        }
        int ans = l - x + (a%x);
        cout << ans << endl;
    }
}