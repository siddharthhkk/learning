#include <bits/stdc++.h>
using namespace std;
int main(){
    #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Fix the first and last elements
        if (a[0] == -1 && a[n-1] == -1) {
            a[0] = 0;
            a[n-1] = 0;
        } 
        else if (a[0] == -1) {
            a[0] = a[n-1];
        } 
        else if (a[n-1] == -1) {
            a[n-1] = a[0];
        }

        // Replace all other -1 with 0 (for lexicographically smallest array)
        for (int i = 1; i < n-1; i++) {
            if (a[i] == -1) a[i] = 0;
        }

        long long ans = llabs(a[n-1] - a[0]);

        cout << ans << "\n";
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i+1<n ? ' ' : '\n');
        }
    }
    return 0;
}
    
}