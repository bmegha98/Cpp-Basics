/*
Given a positive integer N. The task is to check if N is a power of 2. That is N is 2x for some x.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    long long int n;
	    cin>>n;
	    
	    float power = log2(n);
	    long long int r = power;
	    
	    if(power == r)
	     cout<<"YES"<<endl;
	    else
	     cout<<"NO"<<endl;
	     /*
	     if(n == 0)
	      cout<<"NO"<<endl;
	     else
	     {
	        // If N is a power of 2 then its binary representation will
	        // have only 1 (other digits will be 0)and number one less 
	        //than N will have 0 at that place and therefore , their AND
	        //will give 0.
	        
	         long long int m = n-1;
	         if(m & n)
	         cout<<"NO"<<endl;
	         else
	         cout<<"YES"<<endl;
	     }
	     */
	}
	return 0;
}
