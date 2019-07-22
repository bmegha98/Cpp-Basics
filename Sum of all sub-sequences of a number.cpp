/*
Given a number as integer s, find the sum of all the elements present in all possible subsequences of s.
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    string A;
	    cin>>A;
	    int n = A.size();
	    
	    for(int i = 0;i<n;i++)
	       A[i] = A[i]-'0';
	   
	   
	   int sum = 0;
	    
	    for(int i = 1;i < pow(2,n);i++)
	    {
	        for(int j = 0;j<n;j++)
	        {
	            if((i>>j)&1)
	             sum += A[j];
	        }
	       
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
