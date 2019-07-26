/*
You are given an array A[] , you have to construct a new array A2[].
The values in A2[] are obtained by doing Xor of consecutive elements in array.
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
	    for(int i =0;i<n;i++)
	       cin>>A[i];
	    int j =0;
	    while(j < n-1)
	    {
	        B[j] = A[j]^A[j+1];
	        j++;
	    }
	    B[j] = A[j];
	    
	    for(int k =0;k<n;k++)
	      cout<<B[k]<<" ";
	    cout<<endl;
	   
	}
	return 0;
}
