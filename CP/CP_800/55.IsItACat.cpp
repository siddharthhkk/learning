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
        for (char &c : s) c = tolower(c);
        if (s[0] != 'm') {
            cout << "NO\n";
            continue;
        }
        string target = "meow";
        int j = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == target[j]) continue;
            if(j<3 && s[i] == target[j+1]) j++;
            else {
                j = -1;
                break;
            }
        }
        if( j == 3) cout << "YES\n";
        else cout << "NO\n";
    }
}