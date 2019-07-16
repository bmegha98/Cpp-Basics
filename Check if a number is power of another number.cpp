/*
Given two positive numbers x and y, check if y is a power of x or not.
*/

#include<bits/stdc++.h>

using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    long long int a = (log10(y)/log10(x));
	   
	    if((log10(y)/log10(x)) == a)
	     cout<<1<<endl;
	    else
	        cout<<0<<endl;
	    
	    
	    
	}
	return 0;
}
