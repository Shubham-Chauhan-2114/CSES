#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int max1 = 1;   // at least one character exists
    int cnt = 1;

    for (int i = 1; i < (int)s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
        } else {
            cnt = 1;
        }
        max1 = max(max1, cnt);
    }

    cout << max1;
    return 0;
}
