#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++) s[i] = tolower((char)s[i]);
    set<int> st;
    for(int j = 0; j < n; j++){
        for(int i = 97; i < 123; i++){
            if(s[j] == (char)i){
                st.insert(i);
            }
        }
    }
    if(st.size() == 26) cout << "YES\n";
    else cout << "NO\n";
}