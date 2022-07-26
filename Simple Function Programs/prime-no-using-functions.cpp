#include <iostream>
using namespace std;


int isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return -1;
        }
    }
    return 1;
}


int main(){
    int n;
    cin>>n;
    
    int ans = isPrime(n);
    cout << ans;
    
    
}