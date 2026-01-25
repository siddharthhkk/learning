#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int max = a[0], min = a[0];
    int maxp = 0, minp = 0;
    for (int i = 0; i < n; i++) {
        if (a[i]> max) {
            max = a[i];
            maxp = i;
        }
        if (a[i]<= min) {
            min = a[i];
            minp = i;
        }
    }
    int ans = maxp + (n-1-minp);
    if (maxp > minp) ans--;

    cout << ans << endl; 
}