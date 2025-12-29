#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    int a = 0;
    cin >> n;
    for (int i = 0, s = n.size(); i < s; i++) {
        if (n[i] == '7' || n[i] == '4') {
            a++;
        }
    }
    if (a == 4 || a == 7) {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}