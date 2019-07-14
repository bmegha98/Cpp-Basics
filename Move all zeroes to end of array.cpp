/*
Given an array A of positive integers. Push all the zero’s of a given array to the end of the array.
*/

#include<iostream>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N];
	    int k =0;
	    for(int i=0;i<N;i++)
	    {
	        int x;
	        cin>>x;
	        if(x!=0)
	        {
	         A[k] = x;
	         k++;
	        }
	    }
	    for(int j = k;j<N;j++)
	      A[j] = 0;
	    
	    for(int i=0;i<N;i++)
	        cout<<A[i]<<" ";
	   cout<<endl;
	}
	return 0;
}
