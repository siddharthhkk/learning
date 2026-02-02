#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int count = 0;
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;
        if(x <= h) count+=1;
        else count+=2;
    }
    cout << count << endl;
}