#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;
    while(n > 0){
        n/=10;
        ans++;
    }
    cout << ans << endl;
}// O(logn)

    // int cnt = (int) (log10(n)+1);
    // The expression (int)(log10(n)+1)
    // calculates the number of digits in 'n'
    // and casts it to an integer.
    
    // Adding 1 to the result accounts
    // for the case when 'n' is a power of 10,
    // ensuring that the count is correct.
   
    // Finally, the result is cast
    // to an integer to ensure it is rounded
    // down to the nearest whole number.
    // O(1), as simple arithmetic operations in constant time are computed on integers.
