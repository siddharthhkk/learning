#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxRun = 1, curr = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                curr++;
            } else {
                curr = 1;
            }
            maxRun = max(maxRun, curr);
        }
        cout << maxRun + 1 << "\n";
    }
}