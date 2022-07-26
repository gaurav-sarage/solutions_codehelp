#include <iostream>
using namespace std;

// function signature 
void printCounts(int n){
    
    // function body
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    // function call
    printCounts(n);
}