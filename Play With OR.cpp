/*
You are given an array A[] , you have to construct a new array A2[].
The values in A2[] are obtained by doing OR of consecutive elements in array.
*/

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n],B[n];
	    for(int i = 0;i<n;i++)
	     cin>>A[i];
	    int i =0;
	    while(i < n-1)
	     {
	       B[i] = A[i] | A[i+1];
	       i++;
	     }
	     B[i] = A[i];
	     for(int i = 0;i<n;i++)
	       cout<<B[i]<<" ";
	   cout<<endl;
	}
	return 0;
}
