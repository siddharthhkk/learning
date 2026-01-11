#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            ans++;
        }
    }
    if(ans == 2) cout << "Is a Prime Number\n";
    else cout << "Is not a Prime Number\n";
}// O(n)

    /*for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt++;  // If n is divisible by i, increment the counter

            // If n is not a perfect square, count its reciprocal factor
            if (n / i != i) {
                cnt++;
            }
        }
    }

    // If the number of factors is exactly 2 (1 and the number itself), it's prime
    if (cnt == 2) {
        return true;
    } else {
        return false;  // If not, it's not a prime number
    }
} O(sqrt(N)), as The loop iterates up to the square root of n performing constant time operations at each step.*/