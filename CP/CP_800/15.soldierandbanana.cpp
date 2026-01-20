#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, n, w, a = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++) {
        int b = k*i;
        a += b;
    }
    if (n >= a){
        cout << 0;
    }
    else {
        cout << abs(n - a);
    }
}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int total = k * w * (w + 1) / 2;
    cout << max(0, total - n);
}
Some common sums come up a LOT in programming:

1 + 2 + 3 + ... + n = n*(n+1)/2

1² + 2² + 3² + ... + n² = n*(n+1)*(2n+1)/6

1³ + 2³ + 3³ + ... + n³ = (n*(n+1)/2)²

If you see something that looks like these, jump to the formula.*/