#include <bits/stdc++.h>
using namespace std;

int main(){
    int y;
    string x;
    cin >> y;
    for (int i = 0; i < 130; i++){
        y++;
        x = to_string(y);
        if(x[0] != x[1] && x[1] != x[2] && x[2] != x[3] && x[3] != x[0] && x[0] != x[2] && x[0] != x[3] && x[1] != x[3]){
            cout << y << endl;
            break;
        }
    }
}