#include <iostream>
using namespace std;

int main() {
	// your code goes here
	short a=1,b=1,c=1;
	cin>>a>>b>>c;
	if(a==b || b==c || a==c){
	    cout<<"YES"<<endl;
	}else{
	    cout<<"NO"<<endl;
	}
	return 0;
}
