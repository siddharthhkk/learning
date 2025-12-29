#include <bits/stdc++.h>

using namespace std;

int main() {
    int d;
    cin >> d;
    string result[d];
    for (int i = 0; i < d; i++) {
        int n, m;
        cin >> n;
        string a, b, c;
        cin >> a;
        cin >> m;
        cin >> b;
        cin >> c;
        string word = a;
        if (a.length() == n && b.length() == m) {
            for (int i = 0; i < m; i++) {
                if (c[i] == 'V') {
                    word = b[i] + word;
                }
                else 
                    word = word + b[i];
            }
        }
        result[i] = word;
    }
    for (string word : result)
        cout << word << endl;
}