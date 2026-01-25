#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        vector<int> sufMax(n);
        sufMax[n - 1] = p[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            sufMax[i] = max(p[i], sufMax[i + 1]);
        }
        bool done = false;
        for (int i = 0; i < n && !done; i++) {
            if (sufMax[i] > p[i]) {
                int pos = i;
                for (int j = n - 1; j >= i; j--) {
                    if (p[j] == sufMax[i]) {
                        pos = j;
                        break;
                    }
                }
                reverse(p.begin() + i, p.begin() + pos + 1);
                done = true;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << '\n';
    }
}