/*
Given two strings, the task is to check whether these strings are meta strings or not. Meta strings are the strings which can be
made equal by exactly one swap in any of the strings. Equal string are not considered here as Meta strings.
*/

#include<iostream>
using namespace std;

bool MetaStrings(string A , string B)
{
    int n1 = A.length();
    int n2 = B.length();
    int c = 0;
    
    if(n1 != n2)
    return false;
    
    int prev = -1,curr = -1;
    for(int i = 0;i<n1;i++)
    {
        if(A[i] != B[i])
        {
         c++;
         
        if(c>2)
        break;
        
        prev = curr;
        curr = i;
        }
    }
    
    return (c == 2 && A[prev] == B[curr] && A[curr] == B[prev]);
}
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    string A,B;
	    cin>>A>>B;
	    if(MetaStrings(A,B))
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
