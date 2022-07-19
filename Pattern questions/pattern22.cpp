#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int row=1;
    
    // print first triangle
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }
         
        // print second triangle 
        
        int col=1;
        while(col<=row){
            cout<<col;
            col++;
        }
        
        // print third triangle 
        
        int start=row-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}