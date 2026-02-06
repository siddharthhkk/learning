#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string p = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i+=2;
            if(p.size() > 0 && p.back() != ' ') p+= ' ';
        }
        else p+= s[i];
    }
    // Remove trailing spaces
    while(p.size() > 0 && p.back() == ' ') p.pop_back();
    cout << p << endl;
}