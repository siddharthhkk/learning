/*void selection_sort(int a[], int n){
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = min; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
}
int main(){
    int n = 5;
    int arr[] = {2, 6, 11, 8, 4};
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    selection_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, h, l;
        cin >> n >> h >> l;
        int row = 0, col = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x <= h) row++;
            if(x <= l) col++;
        }

        cout << min({row, col, n / 2}) << "\n";
    }
}  

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q, l, r;
        cin >> n >> q;
        long long a[n+1], b[n+1], c[n+1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];
        for(int i = 1; i <= n; i++) c[i] = max(a[i], b[i]);
        vector<long long> dp(n+2, 0); 
        for(int i = n; i >= 1; i--){
            dp[i] = c[i] + dp[i+1]; 
        }
        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << dp[l] - dp[r+1] << ' ';
        }
        cout << '\n';
    }
}*/


/*
#include <bits/stdc++.h>
using namespace std;
       
int main(){
    long long n;
    cin >> n;
    for (int row = 1; row <= n; row++) {
        for (int spaces = 1; spaces <= n - row; spaces++) {
            std::cout << " ";
        }
        std::cout << "*";
        if (row == n) {
            for (int inner = 1; inner < n; inner++) {
                std::cout << " *";
            }
        }
        else {
            for (int inner_spaces = 1; inner_spaces < 2 * row - 1; inner_spaces++) {
                std::cout << " ";
            }
            if (row > 1) {
                std::cout << "*";
            }
        }

        // Move to the next line
        std::cout << std::endl;
    }
        
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Check if already all equal
        bool all_equal = true;
        long long target = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] != target) {
                all_equal = false;
                break;
            }
        }
        if (all_equal) {
            cout << "YES\n";
            continue;
        }
        
        // Try one operation on each i (0-based)
        bool possible = false;
        for (int i = 0; i < n; i++) {
            vector<long long> b = a;  // copy
            long long ai = b[i];
            // Apply op: add ai to 0..i-1, sub ai from i..n-1
            for (int j = 0; j < n; j++) {
                if (j < i) {
                    b[j] += ai;
                } else {
                    b[j] -= ai;
                }
            }
            // Check if all equal
            bool eq = true;
            long long new_t = b[0];
            for (int k = 1; k < n; k++) {
                if (b[k] != new_t) {
                    eq = false;
                    break;
                }
            }
            if (eq) {
                possible = true;
                break;
            }
        }
        
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> vec[i][j];
    }
    for(int j = 0; j < m; j++){
        cout << vec[0][j] << " ";
    }
    for(int i = 1; i < n; i++){
        cout << vec[i][m-1] << " ";
    }
    if(n > 1){
        for(int j = m-2; j >= 0; j--){
            cout << vec[n-1][j] << " ";
        }
    }
    if(m > 1){
        for(int i = n-2; i >= 1; i--){
            cout << vec[i][0] << " ";
        }
    }
    cout << endl;
}*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int space = 1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ') space++;
    }
    cout << space << endl;
}
