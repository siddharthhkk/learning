#include <bits/stdc++.h>
using namespace std;
int main() {
    string word, x;
    cin >> word;
   
    x = toupper(word[0]);
    word.insert(0, x);
    word.erase(1,1);
    cout << word  << '\n';
}
// or stupid me doing so much but not doing the easy part.

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    cin >> word;

    word[0] = toupper(word[0]);  // directly capitalize first char
    cout << word << '\n';

    return 0;
}
*/