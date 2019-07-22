//Given a number n, check if it is divisible by 8.

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    string d;
	    cin>>d;
	    int n = d.length();
	    if(n > 3)
	    {
	        string last = "";
	        for(int i = n-1;i>=n-3;i--)
	           last += d[i];
	       
	        reverse(last.begin(),last.end());
	           
	        int tmp = stoi(last);
	        if(tmp % 8 == 0)
	         cout<<"1"<<endl;
	        else
	        cout<<"-1"<<endl;
	         
	    }
	    else
	    {
	        int t = stoi(d);
	        if(t % 8 == 0)
	         cout<<"1"<<endl;
	        else
	         cout<<"-1"<<endl;
	    }
	}
	return 0;
}
