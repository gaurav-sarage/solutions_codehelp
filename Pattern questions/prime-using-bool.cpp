#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number you want to determine as prime: ";
    cin>>n;
    
    bool isPrime=1;
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            isPrime=0;
            break;
        }
    }
    
    if(isPrime==1){
        cout<<"Prime number";
    }
    return 0;
}