#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 1LL * n * (n + 1) / 2;

    if (sum % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    vector<int> set1, set2;

    if (n % 4 == 0) {
        for (int i = 1; i <= n / 4; i++) {
            set1.push_back(i);
            set1.push_back(n - i + 1);
        }
        for (int i = n / 4 + 1; i <= n - n / 4; i++) {
            set2.push_back(i);
        }
    } else if (n % 4 == 3) {
        set1.push_back(1);
        set1.push_back(2);
        set2.push_back(3);
        for (int i = 4; i <= (n + 3) / 2; i++) {
            set1.push_back(i);
            set1.push_back(n - i + 4);
        }
        for (int i = (n + 3) / 2 + 1; i <= n; i++) {
            set2.push_back(i);
        }
    }

    cout << set1.size() << "\n";
    for (int x : set1) cout << x << " ";
    cout << "\n" << set2.size() << "\n";
    for (int x : set2) cout << x << " ";
    cout << "\n";

    return 0;
}
