#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string target = "codeforces";
    while(n--){
        string s;
        cin >> s;
        int ans = 0;
        for(int i = 0; i < 10; i++){
            if(s[i] != target[i]) ans++;
        }
        cout << ans << endl;
    }
}