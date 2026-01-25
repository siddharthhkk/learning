#include <bits/stdc++.h>
using namespace std;

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
*/
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q, l, r;
        cin >> n >> q;
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        
    }
}


