#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int counts[26] = {0};
    for (char c : s) {
        counts[c - 'A']++;
    }

    int odd_counts = 0;
    char middle_char = 0;
    for (int i = 0; i < 26; ++i) {
        if (counts[i] % 2 != 0) {
            odd_counts++;
            middle_char = i + 'A';
        }
    }

    if (odd_counts > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string first_half = "";
    for (int i = 0; i < 26; ++i) {
        first_half += string(counts[i] / 2, i + 'A');
    }

    string second_half = first_half;
    reverse(second_half.begin(), second_half.end());

    cout << first_half;
    if (middle_char != 0) {
        cout << middle_char;
    }
    cout << second_half << "\n";

    return 0;
}