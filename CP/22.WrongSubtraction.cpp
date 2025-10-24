#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    while (k--){
        string a = to_string(n);
        if (a.back() == '0' ){
            n /= 10;
        }
        else
            n --;
    }
    cout << n << endl;
}
/*or 
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    int k;
    cin >> n >> k;
    while (k--){
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }
    cout << n << '\n';
}
*/