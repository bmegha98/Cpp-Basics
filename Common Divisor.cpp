/*
Given two numbers, p and q. Find the number of common divisors of p and q. 
*/

#include<bits/stdc++.h>
using namespace std;

void NumDivisors(int min,int other)
{
    int count = 1;
    for(int i=2;i<=min;i++)
     if(min % i == 0 && other % i == 0)
      count++;
    cout<<count<<endl;
}

int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int p,q;
	    cin>>p>>q;
	    
	        int min = (p < q)? p : q;
	        int other;
	        if(min == p)
	        other = q;
	        else
	        other = p;
	        
	        NumDivisors(min,other);
	  
	}
	return 0;
}
