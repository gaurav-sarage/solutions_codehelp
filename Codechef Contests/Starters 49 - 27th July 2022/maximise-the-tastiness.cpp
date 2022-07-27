#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    int sum = max(a,b) + max(c,d); 
	    cout << sum << endl;
	    
	    
	}
	return 0;
}
