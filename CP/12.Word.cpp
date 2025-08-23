#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int size = s.length();
    int isu = 0, isl = 0;
    for (int i = 0; i < size; i++) {
        if (isupper(s[i]))
            isu++;
        else if (islower(s[i]))
            isl++;
    }
    if (isu == isl || isl > isu) {
        for (int i = 0; i < size; i++) 
            s[i] = tolower(s[i]);
        cout << s << endl;
    }
    else if (isu > isl) {
        for (int i = 0; i < size; i++) 
            s[i] = toupper(s[i]);
        cout << s << endl;
    }
}
// or 
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int isu = count_if(s.begin(), s.end(), ::isupper);
    int isl = s.size() - isu; // rest are lowercase since only letters

    if (isu > isl) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << '\n';
    return 0;
}*/