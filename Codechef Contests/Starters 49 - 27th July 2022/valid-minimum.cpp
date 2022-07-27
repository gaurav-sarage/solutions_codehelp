#include<bits/stdc++.h>
using namespace std;

void solve(){
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr, arr+3);
    
    if(arr[0] == arr[1]){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}