#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n ;
    cin >> n;

    for(long long int k=1 ; k<=n ; k++ ){
        long long int poss = (k*k*(k*k-1))/2;
        long long int not_poss = 4*(k-1)*(k-2);
        cout << poss - not_poss << "\n"; 
    }

    return 0;
}