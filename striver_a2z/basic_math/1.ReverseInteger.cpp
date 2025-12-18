#include <bits/stdc++.h>
using namespace std;
class dolution {
public:
    int reverse(int x) {
        long ans = 0;
        while(x != 0){
        int y = x%10;
        ans = ans*10 + y;
        x/=10;
        }
        if(x < 0){
            ans *= -1;
        }
        if(ans > INT_MAX || ans < INT_MIN){
            return 0;
        }
        return ans;
    }
};
int main(){
    int n;
    cin >> n;
    cout << dolution().reverse(n) << endl;
}