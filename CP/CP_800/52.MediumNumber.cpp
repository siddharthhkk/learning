#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max(a, max(b,c));
        int mn = min(a, min(b,c));
        if(a != mn && a!=mx) cout << a << endl;
        else if(b != mn && b!=mx) cout << b << endl;
        else if(c != mn && c!=mx) cout << c << endl;
    }
}
/*vector<int> v = {a, b, c};
sort(v.begin(), v.end());
cout << v[1] << endl;*/