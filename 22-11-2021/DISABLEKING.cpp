#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0 || n==1){
        cout<<n<<endl;
    }else{
        cout<<n-1<<endl;
    }
    return 0;
}