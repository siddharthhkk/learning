#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int x = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') x++;
            else if (s[i] == '0') x--;
        }
        cout << x << endl;
    }
}
