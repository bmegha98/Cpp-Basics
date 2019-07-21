/*
Midori like chocolates and he loves to try different ones. There are N shops in a market labelled from 1 to N and each shop offers a 
different variety of chocolate. Midori starts from ith shop and goes ahead to each and every shop. But as there are too many shops Midori
would like to know how many more shops he has to visit. 
You have been given L denoting number of bits required to represent N. You need to print the maximum number of shops he can visit.
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int i,L;
	    cin>>i>>L;
	    
	    int n = pow(2,L);
	    cout<<(n-i)<<endl;
	}
	return 0;
}
