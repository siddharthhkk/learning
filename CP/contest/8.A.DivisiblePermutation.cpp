#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> v(n+1);
        vector<bool> a(n + 1, false);
        v[n] = n;
        a[n] = true;
        for (int i = n - 1; i >= 1; i--) {
            int need = i;
            int prev = v[i + 1];

            if (prev - need >= 1 && !a[prev - need]) {
                v[i] = prev - need;
            } else {
                v[i] = prev + need;
            }
            a[v[i]] = true;
        }
         for (int i = 1; i <= n; i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
}
