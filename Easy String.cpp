/*
Compress the string when lower and upper case are same. In compressed string characters should be in lowercase.

for ex:     input    aaABBb

               output  3a3b
*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    transform(s.begin(), s.end(), s.begin(), ::tolower); 
	    int i =0;
	    string res = "";
	    while(i<s.length())
	    {
	        char tmp = s[i];
	        
	        int j = i+1;
	        while(s[j] == tmp && j<s.length())
	         j++;
	        
	        
	        res += to_string(j-i);
	        res += tmp;
	        i = j;
	            
	    }
	    cout<<res<<endl;
	}
	return 0;
}
