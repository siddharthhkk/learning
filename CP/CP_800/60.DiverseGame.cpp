#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n * m);
        for (int i = 0; i < n * m; i++) {
            cin >> a[i];
        }
        if (n * m == 1) {
            cout << -1 << "\n";
            continue;
        }  
        rotate(a.begin(), a.begin() + 1, a.end());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[ans++] << " ";
            }
            cout << "\n";
        }
    }
}