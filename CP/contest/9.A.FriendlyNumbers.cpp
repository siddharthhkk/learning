#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        if(x%9 != 0) {cout << 0 << endl; continue;}
        int sum = 0;
        for (long long y = x; y <= x + 200; ++y) {
            if (y - sumOfDigits(y) == x) {
                sum++;
            }
        }
        cout << sum << endl;
    }
}