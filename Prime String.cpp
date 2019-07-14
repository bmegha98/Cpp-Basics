/*
Provided a String of length N, your task is to find out whether or not the given string is a prime string. A prime string is a 
string in which the sum of the ASCII value of all the characters is prime.
*/

#include<bits/stdc++.h>
using namespace std;

string IsPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
         return "NO";
    }
    return "YES";
}
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int sum = 0;
	    for(int i=0;i<n;i++)
	        sum+= s[i];
	   cout<<IsPrime(sum)<<endl;
	}
	return 0;
}
