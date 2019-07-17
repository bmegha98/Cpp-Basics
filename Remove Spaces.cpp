//Given a string, remove spaces from it.

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	cin.ignore();
	while(T--)
	{
	    string s,res="";
	    getline(cin,s);
	    
	    for(int i = 0;i<s.size();i++)
	        if(s[i]!=' ')
	        res+=s[i];
	   cout<<res<<endl;
	     
	}
	return 0;
}
