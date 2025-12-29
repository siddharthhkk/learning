#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int intram = 0;
    vector<int> ans;
    int max = 0;
    for(int i = 1; i <= n; i++){
        int a, b;
        cin >> a >> b;
        intram -= a;
        intram += b;
        ans.push_back(intram);
        max = std::max(max, intram);
    }
    cout << *max_element(ans.begin(), ans.end()) << endl;
    cout << max << endl; // does the same thing with less space.
}