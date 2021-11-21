#include <iostream>
using namespace std;

int main() {
	// your code goes here
	short t;
	cin>>t;
	while(t--){
	    short a,b;
	    cin>>a>>b;
	    if((a+b)<3){
	        cout<<"1"<<endl;
	    }else if((a+b)>=3 && (a+b)<=10){
	        cout<<"2"<<endl;
	    }else if((a+b)>=11 && (a+b)<=60){
	        cout<<"3"<<endl;
	    }else{
	        cout<<"4"<<endl;
	    }
	}
	return 0;
}
/*
4
1 0
4 1
100 0
20 5
*/
