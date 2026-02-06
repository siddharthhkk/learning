#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int total = 0;
    for(int i = 0; i < n; i++) {cin >> v[i]; total+= v[i];}
    
    sort(v.begin(), v.end(), greater<int>());
    
    int half = total/2;
    int sum = 0;
    int count = 0;
    
    for(int i = 0; i < n; i++){
        sum += v[i];
        count++;
        if(sum > half) break;
    }
    
    cout << count << endl;
    return 0;
}