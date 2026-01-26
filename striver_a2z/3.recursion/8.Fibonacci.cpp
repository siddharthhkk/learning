#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
}
/*runtime => 2^n
a O(n) approach
int main() {
    int n = 5;
    // If n is 0, only the first Fibonacci number is printed
    if (n == 0) {
        cout << "The Fibonacci Series up to " << n << "th term:" << endl;
        cout << 0;
    }
    else {
        int secondLast = 0; // (i-2)th term
        int last = 1;       // (i-1)th term
        cout << "The Fibonacci Series up to " << n << "th term:" << endl;
        cout << secondLast << " " << last << " ";
        int cur; // ith term
        for (int i = 2; i <= n; i++) {
            cur = last + secondLast;   // ith Fibonacci number
            secondLast = last;         // move window forward
            last = cur;
            cout << cur << " ";
        }
    }
}*/