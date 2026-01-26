#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v, int left, int right){
    if(left >= right) return;
    swap(v[left], v[right]);
    solve(v, left+1, right-1);
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(auto x : v) cout << x << " ";
    cout << endl;
    solve(v, 0, n-1);
    for(auto x : v) cout << x << " ";
    cout << endl;
}
/*can directly use reverse(arr.begin(), arr.end());*/