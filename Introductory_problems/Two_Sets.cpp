#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void print_set(const vector<long long>& s) {
    cout << s.size() << "\n";
    for (size_t i = 0; i < s.size(); ++i) {
        cout << s[i] << (i == s.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {

    long long n;
    cin >> n;

    long long total_sum = n * (n + 1) / 2;

    if (total_sum % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    vector<long long> set1, set2;
    long long target = total_sum / 2;

    for (long long i = n; i >= 1; --i) {
        if (target >= i) {
            set1.push_back(i);
            target -= i;
        } else {
            set2.push_back(i);
        }
    }

    print_set(set1);
    print_set(set2);

    return 0;
}