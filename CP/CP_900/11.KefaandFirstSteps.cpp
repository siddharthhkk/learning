#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int maxc = 1, mx = 1;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n-1; i++){
        if(v[i] <= v[i+1]){
            mx++;
        }
        else{
            maxc = max(mx, maxc);
            mx = 1;
        }
    }
    maxc = max(mx, maxc); 
    cout << maxc << endl;
}