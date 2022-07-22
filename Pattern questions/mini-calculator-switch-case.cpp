#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    char ch;
    cin>>ch;
    
    switch(ch){
        case '*': cout << "Multiplication is " << a*b;
        break;
        
        case '/': cout << "Division is " << a/b;
        break;
        
        case '+': cout << "Addition is " << a+b;
        break;
        
        case '-': cout << "Subtraction is " << a-b;
        break;
        
        case '%': cout << "Modulus is " << a%b;
        break;
        
        default: cout << "Enter valid operator" << endl;
        break;
    }
    return 0;
}