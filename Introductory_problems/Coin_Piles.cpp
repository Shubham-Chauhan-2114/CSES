#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long h, l;
        cin >> h >> l;

        if ((h + l) % 3 == 0 && max(h, l) <= 2 * min(h, l)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}