#include <bits/stdc++.h>
using namespace std;    

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        vector<int> awake(n, 0);

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                awake[i] = 1;
                for (int j = i + 1; j <= min(n - 1, i + k); j++) {
                    awake[j] = 1;
                }
            }
        }

        int sleepCount = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0' && awake[i] == 0)
                sleepCount++;
        }

        cout << sleepCount << "\n";
    }
    return 0;
}