#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n>0){
        if(n>=100){
            count++;
            n-=100;
        }
        else if(n >= 20){
            count++;
            n-=20;
        }
        else if(n >= 10){
            count++;
            n-=10;
        }
        else if(n >= 5){
            count++;
            n-=5;
        }
        else if(n >= 1){
            count++;
            n-=1;
        }
    }   
    cout << count << endl;
}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int notes[] = {100, 20, 10, 5, 1};

    for (int note : notes) {
        count += n / note;
        n %= note;
    }

    cout << count << endl;
}*/