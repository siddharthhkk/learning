#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int p = 0;
        char c;
        cin >> c;
        string a = "codeforces";
        for (int i = 0, s = a.size(); i < s; i++){
            if (c == a[i]){
                p++;
                break;
            }
            
        }
        if (p == 1){ cout << "YES\n"; }
        else { cout << "NO\n"; }
    }
}
