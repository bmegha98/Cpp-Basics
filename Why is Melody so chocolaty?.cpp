/*
Chunky gets happy by eating Melody.
Given an array of N elements each element represent happiness chunky get by eating melody.
Chunky knows why melody is so chocolaty but will only tell you once you tell him the Max happiness he can get by eating two adjacent 
melodies.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++)
	     cin>>A[i];
	    
	    int h = INT_MIN;
	    for(int i = 0;i<n-1;i++)
	     h = max(h , A[i]+A[i+1]);
	    
	    cout<<h<<endl;
	}
	return 0;
}
