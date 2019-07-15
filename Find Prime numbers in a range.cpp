/*
Generate all prime numbers between two given numbers.
*/

#include<bits/stdc++.h>
using namespace std;

void Prime(int min,int n)
{
    bool Prime[n+1];
    memset(Prime,true,n+1);
    Prime[0] = false;
    Prime[1]= false;
    int i = 2;
    while(i*i<=n)
    {
        if(Prime[i])
        {
            for(int j = i*2;j<=n;j+=i)
             Prime[j] = false;
        }
        i++;
    }
    
    for(int k = min;k<=n;k++)
     if(Prime[k])
     cout<<k<<" ";
}
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int min , max;
	    cin>>min>>max;
	    Prime(min,max);
	    cout<<endl;
	}
	return 0;
}
