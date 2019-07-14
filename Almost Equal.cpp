/*
Given two strings S1 and S2 consisting of only lowercase characters whose anagrams are almost equal. The task is to count the number of 
characters which needs to be edited(delete) to make S1 equal to S2.
For each testcase, print the count of characters needed to delete to make S1 and S2 equal.
*/

#include <bits/stdc++.h>
using namespace std;
// Function Prototype
int countChars(string, string);
// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    
	    // taking string input
	    string s1, s2;
	    cin >> s1 >> s2;
	    
	    cout << countChars(s1, s2) << endl;
	}
	
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
int countChars(string s1, string s2)
{
    int count = 0;
    int hash1[26] = {0};
    int hash2[26] = {0};
    for(int i = 0;i<s1.size();i++)
        hash1[s1[i]-'a']++;
        
    for(int i = 0;i<s2.size();i++)
        hash2[s2[i]-'a']++;
        
    for(int i=0;i<26;i++)
    {
        count+= abs(hash1[i]-hash2[i]);
    }
    return count;
    
}
