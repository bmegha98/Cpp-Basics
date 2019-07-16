/*
Given an integer, check whether it is Bleak or not.

A number ‘n’ is called Bleak if it cannot be represented as sum of a positive number x  and set bit count in x, i.e., x + countSetBits(x)
is not equal to n for any non-negative number x.
*/

#include<iostream>
using namespace std;

int Count(int n)
{
    if(n == 0)
    return 0;
    
    return 1 + Count(n & (n-1));
}
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    bool flag = true;
	    for(int i = N;i>=N/2;i++)
	    {
	        if(i+Count(i) == N)
	         {
	             flag = false;
	             break;
	         }
	    }
	    if(flag)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
