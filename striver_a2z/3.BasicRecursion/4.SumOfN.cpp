#include <iostream>
using namespace std;

void sum(int n, int &sm){
    if(n < 1) return;
    sm += n;
    sum(n-1, sm);
}
int main(){
    int n;
    cin >> n;
    int sm = 0;
    sum(n, sm);
    cout << sm << endl;
}
/*
int sum(int n){
    if(n == 1) return 1;
    return n + sum(n-1);
}
*/