/*
Given a string s, find out the count of all contiguous substrings whose starting and ending are same character.
Note: string contains lowercase English alphabets only.
*/

#include<iostream>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,count = 0;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    for(int i = 0;i<n;i++)
	    {
	        char first = s[i];
	        for(int j = i;j<n;j++)
	        {
	            char last = s[j];
	            if(first == last)
	                count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
