#include <bits/stdc++.h>
using namespace std;
int main() {
    int s1, s2, s3, s4, ans = 0;
    cin >> s1 >> s2 >> s3 >> s4;
    if(s1 == s2 || s1 == s3 || s1 == s4){
        ans++;
    }
    if(s2 == s3 || s2 == s4){
        ans++;
    }
    if(s3== s4){
        ans++;
    }
    cout << ans << endl;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    for(int i = 0; i < 4; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << 4 - s.size() << endl;
}
*/