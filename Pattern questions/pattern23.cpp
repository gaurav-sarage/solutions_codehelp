#include <iostream>
using namespace std;

int main()
{
   int n ;
   cin>>n ; 
   int row = 1;

   while(row<=n)
   {
       
       
       int col = 1;
       while(col<=n-row+1){
           cout << col;
           col++ ;

       }

    int star = row -1 ;
    while(star){
        cout <<"*";
    star--;
    
    }
    
    int star2 = row - 1;
    while(star2){
        cout<<"*";
        star2--;
    }
    
    int col2 = n - row +1 ;
    while(col2){
        cout<<col2;
        col2--;
    }
    cout<<endl;
    row++;
   }
}