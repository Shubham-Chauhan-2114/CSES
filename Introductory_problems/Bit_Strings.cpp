#include <bits/stdc++.h>
using namespace std;

long long power(long long base, long long exp) {
    long long res = 1;
    long long mod = 1e9 + 7;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

int main() {

    long long n;
    cin >> n;

    cout << power(2, n) << "\n";
}