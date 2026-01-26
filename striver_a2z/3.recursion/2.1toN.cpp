#include <iostream>
using namespace std;

void solve(int n){
    if(n==0) return;
    solve(n-1);
    cout << n << " "; //Print current number during backtracking like after the recursion is completed stack removes all element one by one
}

int main(){
    int n;
    cin >> n;
    solve(n);
}
/* you could also do it normally as recursion is called

void printNumbers(int current, int n) {
    // Base case: if current exceeds n, stop recursion
    if (current > n)
        return;

    // Print current number
    cout << current << " ";

    // Recursive call with next number
    printNumbers(current + 1, n);
}
*/