#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int max_gap = a[0];
        for (int i = 1; i < n; i++) {
            max_gap = max(max_gap, a[i] - a[i - 1]);
        }
        int last_gap = x - a[n - 1];
        max_gap = max(max_gap, 2 * last_gap);
        cout << max_gap << "\n";
    }
}