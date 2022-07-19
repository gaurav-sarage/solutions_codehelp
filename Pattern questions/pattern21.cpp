#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int row=1;
    while(row<=n){
        int space=row-1;
        while(space){
            cout<<" ";
            space--;
        }
        int col=1;
        int value=row;
        while(col<=row){
            cout<<value;
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}