/*
Jack is very fond of reading. He reads a lot many pages of books in a day. Since he is obsessed with reading, he reads K times more pages
than the number of pages he read the previous day.He read 1 page on the first day. He wants to see that on any given day N, how many pages
will he read.Since the answer can be very large, print the answer in modulo 109+7.
*/

#include<iostream>
#define MOD 1000000007

using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    
	    long long unsigned int s = 1;
	    
	    int c = 2;
	    while(c<=n)
	    {
	        s = (k * s)% MOD;
	        c++;
	    }
	    
	    cout<<s<<endl;
	}
	return 0;
}
