#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = "";
        for(int i = 0; i < n; i++){
            string a;
            cin >> a;
            string x = a + s;
            string y = s + a;
            s = min(x , y);
        }
        cout << s << endl;
    }
}