#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int x = a+b;
        int ans = 0;
        for(int i = 0; i <= x; i=i*2){
            int y = 0;
            y += i;
            if(y < x) ans++;
        }
        cout << ans << endl;
    }
}