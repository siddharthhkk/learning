#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int size = s.size();
    for (int i = 0; i < size - 1; i++) {
        for (int i = 0, size = s.length(); i < size - 1; i++) {
            int temp = 0;
            if (s[i] == '+') {
                continue;
            }
            else if (s[i] > s[i+2]) {
                swap(s[i], s[i+2]);
            }
        }
    }
    cout << s << '\n';
    return 0;
}
// or a better approach will be 

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    // Bubble sort only the digits (skip '+')
    for (int j = 0; j < n; j += 2) {
        for (int i = 0; i < n - 2; i += 2) {
            if (s[i] > s[i + 2]) {
                swap(s[i], s[i + 2]);
            }
        }
    }

    cout << s << '\n';
    return 0;
}*/