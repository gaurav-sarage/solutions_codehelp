#include <iostream>
using namespace std;

int main()
{
    int amount, h_100=0, f_50=0,t_20=0, o_1=0, rem=1, mod=0;
    
    cout << "Please enter the amount you have: ";
    cin >> amount;
    cout << endl;
    
    switch(1){
        case 1: h_100 = amount / 100;
        rem = amount % 100;
        cout << "The no of hundred rupee notes are: " << h_100 << endl;
        
        case 2: f_50 = rem / 50;
        rem = rem % 50;
        cout << "The no of fifty rupee notes are: " << f_50 << endl;
        
        case 3: t_20 = rem / 20;
        rem = rem % 20;
        cout << "The no of twenty rupee notes are: " << t_20 << endl;
        
        case 4: o_1 = rem / 1;
        rem = rem % 1;
        cout << "The number of one rupee notes are: " << o_1 << endl; 
    }
    return 0;
}