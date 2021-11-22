/*
Alice and Bob play the classic game of odds and evens. In this game, each of the two players choose a number between 1 and 5 without revealing to their opponent. Both of the players then simultaneously reveal their number by holding up that many fingers of their hand. Then the winner is decided based upon whether the sum of numbers played by both the players is odd or even. In this game we assume that if the sum is odd then Alice wins, otherwise Bob wins.

If Alice held up a fingers and Bob held up b fingers, determine who won the game.

Input Format
First line will contain T, number of testcases. Then the T testcases follow.
Each testcase contains of a single line of input, two integers a,b which denote the number played by Alice and Bob respectively.
Output Format
For each testcase, output which player won the game.

Constraints
1≤T≤1000
1≤a,b≤5
Sample Input 1 
2
1 1
1 2
Sample Output 1 
Bob
Alice
Explanation
In the first test case, Alice and Bob both played 1. The sum of the numbers played by them is 2 which is even. Therefore Bob wins.

In the second test case, Alice played 1 while Bob played 2. The sum of the numbers played by them is 3 which is odd. Therefore Alice wins.
*/ 

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