#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, s2;
    cin >> s >> s2;
    string s3(s.size(), '0');
    for(int i = 0; i < s.size(); i++){
        if(s[i] != s2[i]) s3[i] = '1';
        else s3[i] = '0';
    }
    cout << s3 << endl;
}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, s2;
    cin >> s >> s2;
    for (int i = 0; i < s.size(); i++) {
        cout << (s[i] != s2[i]);
    }
    cout << '\n';
}*/