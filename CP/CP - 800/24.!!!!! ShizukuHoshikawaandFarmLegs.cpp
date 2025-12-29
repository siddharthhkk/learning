#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    if(n % 2 == 0){
        int ans;
        ans = (n/4)+1;    
        cout << ans << endl;    
    }
    else {cout << "0" << endl;}
   }
}