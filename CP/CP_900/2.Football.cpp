#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 1;
    int maxCount = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            count++;
            maxCount = max(maxCount, count);
        }
        else{
            count = 1;
        }
    }
    if(maxCount >= 7) cout << "YES\n";
    else cout << "NO\n";
}