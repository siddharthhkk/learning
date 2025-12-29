#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        if(x == y) cout << -1 << endl;
        else if(x < y){
            cout << 2 << endl;
        }
        else if(1 < y && y < x-1){     // y < x-1 logic nhi aya tha even wali bakchodi kar di thi.
            cout << 3 << endl;
        }
        else cout << -1 << endl;
    }
}