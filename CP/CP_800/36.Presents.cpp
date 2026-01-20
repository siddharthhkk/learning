#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> p;
    int arr[n+1];
    for(int i = 1; i <= n; i++){
        cin >> p[i];
        arr[p[i]] = i;
    }
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}