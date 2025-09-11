#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for(int i=0 ;i<n ;i++){
        int dumm;
        cin >> dumm;
        arr.push_back(dumm);
    }

    long long int ans = 0;

    for(int i=1 ; i<n ;i++){
        if(arr[i] < arr[i-1] ){
            ans += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout <<  ans;
    return 0;
}