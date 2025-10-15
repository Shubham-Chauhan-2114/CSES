#include <bits/stdc++.h>
using namespace std;



int main() {

    long long n;
    cin >> n;

    int base = 5;
    int cnt = 0;
    while(base <= n){
        cnt += n/base;
        base *= 5;
    }

    cout << cnt;
}