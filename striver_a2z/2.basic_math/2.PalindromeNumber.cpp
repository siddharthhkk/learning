#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int orignal = x;
        int rev = 0;
        while(x != 0){
            int y = x%10;
            rev = rev*10 + y;
            x/=10;
        }
        cout << rev << endl;
        if(rev > INT_MAX || rev < INT_MIN) return false;
        if(orignal == rev){
            return true;
        }
        else{return false;}
    }
};
int main(){
    int n;
    cin >> n;
    cout << Solution().isPalindrome(n) << endl;
}
/*math approach-
bool isPalindrome(int x) {
    if(x < 0) return false;
    
    int original = x;
    long rev = 0;
    
    while(x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    
    return original == rev;
}*/
/*string approach-
bool isPalindrome(int x) {
    if(x < 0) return false;
    
    string s = to_string(x);
    int left = 0, right = s.length() - 1;
    
    while(left < right) {
        if(s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}*/