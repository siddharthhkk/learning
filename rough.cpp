

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
        
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    cout << __gcd(a, b) << endl;
}

