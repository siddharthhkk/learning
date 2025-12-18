#include <iostream>
using namespace std;
int main() {
    int n,m,f = 0, end = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> m;
            if (m == 1) {
                f++;
            }
        }
        if (f >=2) {
            end++;
        }
        f = 0;
    }
    cout << end << endl;
}     // tf was this :/
/*Second Try was better dude 

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n--){
        int p, v, t;
        cin >> p >> v >> t;
        if(p + v + t >= 2){
            count += 1;
        }
    }
    cout << count << endl;
}*/