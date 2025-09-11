#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int xor1 = 0;
    for(int i=1 ;i<=n ;i++){
        xor1 ^= i;   // XOR of all numbers from 1 to n
    }

    int dumm ;
    int xor2 = 0;
    for(int i=1 ; i<n ; i++){
        cin >> dumm;
        xor2 ^= dumm; // XOR of all given numbers
    } 

    cout << (xor1 ^ xor2) ; // missing number
    return 0;
}
