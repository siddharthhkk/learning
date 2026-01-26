#include <iostream>
using namespace std;

void call_name(string s, int n){
    if(n==0){
        return;
    }
    cout << s << endl;
    call_name(s, n-1);
}
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    call_name(s, n);
}