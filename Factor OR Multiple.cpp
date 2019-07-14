/*
Given an array A comprising of N non-zero, positive integers and an integer X, find the logical OR of all such elements in the array that
are a multiple of X. The result of OR operation should be printed in decimal form. If there is only one multiple of X in A, print the 
element in decimal form. If no multiple of X is found, print 0.
*/

#include<iostream>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int N,X;
	    cin>>N>>X;
	    int A[N];
	    int OR = 0;
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        if(A[i]%X == 0)
	          OR = (OR | A[i]);
	    }
	    cout<<OR<<endl;
	}
	return 0;
}
