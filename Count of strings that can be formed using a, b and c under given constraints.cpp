/*
Given a length n, count the number of strings of length n that can be made using ‘a’, ‘b’ and ‘c’ with at-most one ‘b’ and two ‘c’s
allowed.
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    int b0c0 = 1 , b0c1 = n , b0c2 = (n*(n-1))/2;
	    int b1c0 = n , b1c1 = n*(n-1) , b1c2 = (n*(n-1)*(n-2))/2;
	    
	    int count = b0c0 + b0c1 + b0c2 + b1c0 + b1c1 + b1c2;
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}
