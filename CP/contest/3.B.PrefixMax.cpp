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
        for (int i = 0; i < n; ++i) cin >> a[i];

        long long ans = 0;
          for (int i = -1; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                // Perform swap only if i != -1
                if (i != -1)
                    swap(a[i], a[j]);

                long long sum = 0;
                long long curMax = 0;
                for (int k = 0; k < n; k++) {
                    curMax = max(curMax, a[k]);
                    sum += curMax;
                }

                ans = max(ans, sum);

                // Undo swap
                if (i != -1)
                    swap(a[i], a[j]);
            }
        }

        cout << ans << "\n";
    }
}
