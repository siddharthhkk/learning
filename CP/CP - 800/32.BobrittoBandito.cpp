#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int x = n - m;
        while(x--){
            if(l < 0) l++;
            else r--;
        }
        cout << l << " " << r << endl;
    }
}