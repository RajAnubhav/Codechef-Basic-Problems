// Problem on Chefs slippers

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,l,x;
	    cin>>n>>l>>x;
	    cout<<((min((n-l),l))*x)<<endl;
	}
	return 0;
}
