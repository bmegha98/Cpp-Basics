/*
Given an array A of N integers. The task is to find a peak element in it.
An array element is peak if it is not smaller than its neighbours. For corner elements, we need to consider only one neighbour.

Note: There may be multiple peak element possible, in that case you may return any valid index.
*/

#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peakElement(a,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}
	return 0;
}

int peakElement(int arr[], int n)
{
   for(int i=0;i<n-1;i++)
   {
       if(arr[i]>=arr[i+1])
            return i;
   }
}
