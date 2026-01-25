#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int x = (s.size()/3);
    set<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') st.insert(s[i]);
    }
    cout << st.size() << endl;
}