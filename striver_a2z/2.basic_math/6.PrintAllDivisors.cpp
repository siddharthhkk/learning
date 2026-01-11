#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            arr.push_back(i);
        }
    }
    cout << "[";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << "]\n";
}// O(n)