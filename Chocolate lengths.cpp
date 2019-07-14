/*
Adam has N chocolates of unequal lengths.He wants that each chocolate should be of equal lengths.In order to do so,at each step,he picks 
two unequal length chocolates and takes their length difference 'd' and then he eats the bigger one and make it's length  'd'.He stops 
when all the chocolates are of equal length.Find the final length of all chocolates.
*/

#include<bits/stdc++.h>
using namespace std;
/*
int GCD(int a , int b)
{
    if(a == 0)
     return b;
    if(b == 0)
     return a;
    if(a == b)
     return a;
    if(a > b)
     return GCD(a-b,b);
    return GCD(a ,b-a);
}
*/
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N];
	    int ans = 0;
	    for(int i=0;i<N;i++)
	        cin>>A[i];
	   
	    for(int i=0;i<N;i++)
	        ans = __gcd(ans,A[i]);
	   
	    cout<<ans<<endl;
	      
	}
	return 0;
}
