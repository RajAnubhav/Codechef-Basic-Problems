// this is to find whether Bob will win or Alice 
// for even -> Bob and for odd -> Alice

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    short a,b;
	    cin>>a>>b;
	    if((a+b)%2==0)
	        cout<<"Bob"<<endl;
	    else
	        cout<<"Alice"<<endl;
	}
	return 0;
}