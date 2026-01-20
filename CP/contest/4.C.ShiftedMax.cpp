#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i< n; i++){
            cin >> a[i];
        }
        long long mn = *min_element(a.begin(), a.end());
        for (int i = 0; i < n; i++) a[i] -= mn;

        // Put all elements >= 0 into a set
        set<long long> s;
        for (auto x : a) {
            if (x >= 0) s.insert(x);
        }
        
        // Compute MEX
        long long mex = 0;
        while (s.count(mex)) mex++;

        cout << mex << "\n";
    }
}