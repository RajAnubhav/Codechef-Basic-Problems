/*Read problem statements in Russian and Mandarin Chinese.
A great deal of energy is lost as metabolic heat when the organisms from one trophic level are consumed by the next level.

Suppose in Chefland the energy reduces by a factor of K, i.e, if initially, the energy is X, then the transfer of energy to the next tropic level is ⌊XK⌋. This limits the length of foodchain which is defined to be the highest level receiving non-zero energy.

E is the energy at the lowest tropic level. Given E and K for an ecosystem, find the maximum length of foodchain.

Note: ⌊x⌋ denoted the floor function, and it returns the greatest integer that is less than or equal to x (i.e rounds down to the nearest integer). For example, ⌊1.4⌋=1, ⌊5⌋=5, ⌊−1.5⌋=−2, ⌊−3⌋=−3 , ⌊0⌋=0.

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains a single line of input, two integers E,K.
Output Format
For each testcase, output in a single line answer to the problem.

Constraints
1≤T≤104
1≤E≤109
2≤K≤109
Sample Input 1 
3
5 3
6 7
10 2
Sample Output 1 
2
1
4
Explanation
TestCase 1: The energy at first level is 5 units. For the second level energy becomes ⌊53⌋=1 units. So the length of foodchain is 2 since from the next level onwards 0 units of energy will be received.

TestCase 3: The energy at different levels is:

Level 1- 10 units
Level 2- ⌊102⌋=5 units
Level 3- ⌊52⌋=2 units
Level 4- ⌊22⌋=1 units
Level 5- ⌊12⌋=0 units
So the answer is 4, since it is the last level to receive non-zero energy.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int e=1,k=2;
	    cin>>e>>k;
	    if(e/k == 0){
	        cout<<(e/k)+1<<endl;
	    }else if((e%k==0)){
	        cout<<(e/k)-1<<endl;
	    }else{
	        cout<<(e/k)+1<<endl;
	    }
	}
	return 0;
}
