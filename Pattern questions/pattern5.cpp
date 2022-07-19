#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            j++;
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}