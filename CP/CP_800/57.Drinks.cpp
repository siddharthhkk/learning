#include <bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin >> n;
    double t = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        t += x;
    }
    double total_juice = t/100;
    cout << total_juice*100/n << endl;
}