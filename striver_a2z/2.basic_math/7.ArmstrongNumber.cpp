#include <bits/stdc++.h>
using namespace std;
int sizeofint(int n){
    int size = 0;
    while(n > 0){
        n/=10;
        size++;
    }
    return size;
}

int armstrong(int n, int size){
    int ans = 0;
    for(int i = 1; i <= size; i++){
        ans += pow((n%10), size);
        n/=10;
    }
    return ans;
}
int main(){
    int n, ans = 0;
    cin >> n;
    int size = sizeofint(n);
    if(armstrong(n, size) == n){
        cout << "Is a Armstrong Number\n";
    }
    else cout << "Is not\n";
}// O(logn) as it is O(no. of digits in n)