// to find the highest divisor from which n is divisible
/*
You are given an integer N. Find the largest integer between 1 and 10 (inclusive) which divides N.

Input
The first and only line of the input contains a single integer N.

Output
Print a single line containing one integer ― the largest divisor of N between 1 and 10.

Constraints
2≤N≤1,000
Subtasks
Subtask #1 (100 points): original constraints

Example Input 1
24
Example Output 1
8
Explanation
The divisors of 24 are 1,2,3,4,6,8,12,24, out of which 1,2,3,4,6,8 are in the range [1,10]. Therefore, the answer is max(1,2,3,4,6,8)=8.

Example Input 2
91
Example Output 2
7
Explanation
The divisors of 91 are 1,7,13,91, out of which only 1 and 7 are in the range [1,10]. Therefore, the answer is max(1,7)=7.


*/

#include<iostream>
using namespace std;
int main(){
    short n;
    cin>>n;
 
        if(n%10==0){
            cout<<"10"<<endl;
        }else if(n%9==0){
            cout<<"9"<<endl;
        }else if(n%8==0){
            cout<<"8"<<endl;
        }else if(n%7==0){
            cout<<"7"<<endl;
        }else if(n%6==0){
            cout<<"6"<<endl;
        }else if(n%5==0){
            cout<<"5"<<endl;
        }else if(n%4==0){
            cout<<"4"<<endl;
        }else if(n%3==0){
            cout<<"3"<<endl;
        }else if(n%2==0){
            cout<<"2"<<endl;
        }else{
            cout<<"1"<<endl;
        }
    
    return 0;
}