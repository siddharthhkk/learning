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
        while(s.size() > 0 && ((s[0] == '0' && s[s.size()-1] == '1') || (s[0] == '1' && s[s.size()-1] == '0'))){
            s.erase(s.begin());
            s.erase(s.begin() + s.size()-1);
        }
        cout << s.size() << endl;
    }
}