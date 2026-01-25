#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ml = k*l;
    int toast = ml/nl;
    int limes = c*d;
    int salt = p/np;
    cout << min(toast, min(limes, salt))/n << endl;
}