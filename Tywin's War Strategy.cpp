/*
Tywin Lannister is facing a war. He has N troops of soldiers. Each troop has a certain number of soldiers denoted by an array A.
Tywin thinks that a troop is lucky if it has number of soldiers as a multiple of K. He doesn't want to lose any soldiers, so he decides to 
train some more.He will win the war if he has atleast half of his troops are lucky troops.
Determine the minimum number of soldiers he must train to win the war.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int A[n];
	    map<int,int> m;
	    for(int i = 0;i<n;i++)
	    {
	     cin>>A[i];
	     int rem = A[i] % k;
	     if(rem != 0)
	       rem = k - rem;
	     m[i] = rem;
	    }
	    int lucky = (n % 2 == 0)? n/2 : n/2 + 1;
	    int min = 0;
	    vector<int> c;
	    for(map<int,int>::iterator it = m.begin();it != m.end();it++)
	      c.push_back(it->second);
	     sort(c.begin(),c.end());
	    
	    for(int i = 0;i<lucky;i++)
	        min += c[i];
	     
	     cout<<min<<endl;
	}
	return 0;
}
