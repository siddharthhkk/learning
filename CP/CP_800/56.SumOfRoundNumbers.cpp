#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p = 1;
        vector<int> a;
        while(n>0){
            if(n%10 != 0){
                a.push_back(n%10*p);
            }
            n /= 10;
            p *= 10;
        }
        cout << a.size() << "\n";
        for (int x : a) {
            cout << x << " ";
        }
        cout << "\n";
    }
}