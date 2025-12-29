#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    string rs(s.rbegin(), s.rend());
    cout << (t == rs ? "YES\n" : "NO\n");
    return 0;
}