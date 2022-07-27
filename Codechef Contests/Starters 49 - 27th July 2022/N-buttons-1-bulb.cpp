#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m;
	    cin>>m;
	    string s,r;
	    cin>>s>>r;
	    
	    long long a=0, b=0;
	    
	    for(int i=0; i<s.length(); i++){
	        if(s[i] == '1'){
	            a++;
	        }
	    }
	    
	    for(int i=0; i<r.length(); i++){
	        if(r[i] == '1'){
	            b++;
	        }
	    }
	    
	    long long difference = abs(a-b);
	    if(difference%2==0){
	        cout << "1" << endl;
	    }
	    else{
	        cout << "0" << endl;
	    }
	    
	}
	return 0;
}
