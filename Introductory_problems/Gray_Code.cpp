#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < (1 << n); ++i) {
        int gray_code = i ^ (i >> 1);
        
        // bitset converts the integer to a binary representation.
        // We take the last n characters to get the correct length.
        string binary_representation = bitset<16>(gray_code).to_string();
        cout << binary_representation.substr(16 - n) << "\n";
    }

    return 0;
}