#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, h;
        cin >> n >> m >> h;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<long long> b = a;
        for(int i = 0; i < m; i++){
            int idx;
            long long c;
            cin >> idx >> c;
            idx--; 
            b[idx] += c;
            if(b[idx] > h){
                b = a; 
            }
        }
        for(int i = 0; i < n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
}
/* TLE ERROR :////
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<long long> b = a; // current array

        for(int i = 0; i < m; i++) {
            int idx;
            long long c;
            cin >> idx >> c;
            idx--; // 0-based

            b[idx] += c;
            if(b[idx] > h) {
                // crash: reset array
                b = a;
            }
        }

        for(int i = 0; i < n; i++)
            cout << b[i] << (i == n-1 ? "\n" : " ");
    }
}
*/