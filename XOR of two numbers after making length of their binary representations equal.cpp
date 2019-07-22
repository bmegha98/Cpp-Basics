/*
Given two numbers say a and b. Print their XOR after making the lengths of their binary representation equal by adding trailing zeros to
the binary representation of smaller one.
*/

#include<bits/stdc++.h>

using namespace std;

int Count(int n)
{
    int c = 0;
    while(n > 0)
    {
      c++;
      n = n>>1;
    }
    return c;
}

int XOR(int a , int b)
{
    if(Count(a) < Count(b))
       a = a<<(Count(b)-Count(a));
    else if(Count(b) < Count(a))
       b = b<<(Count(a)-Count(b));
    
    return a^b;
}

int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b;
	    cin>>a>>b;
	   
	    cout<<XOR(a,b)<<endl;
	}
	return 0;
}
