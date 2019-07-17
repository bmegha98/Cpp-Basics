/*
Bingu was testing all the strings he had at his place, and found that most of them were prone to vicious attack by Banju, his arch enemy.
Bingu decided to encrypt all the strings he had, by the following method. Every substring of identical letters is replaced by a single 
instance of that letter followed by the number of occurences of that letter. Then, the string thus obtained is further encrypted by
reversing it.
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
	    string::reverse_iterator it;
	    int i =0;
	    string res = "";
	    while(i<s.length())
	    {
	        char tmp = s[i];
	        
	        int j = i+1;
	        while(s[j] == tmp && j<s.length())
	         j++;
	        
	        res += tmp;
	        res += to_string(j-i);
	        i = j;
	            
	    }
	    
	    for(it = res.rbegin();it!=res.rend();it++)
	      cout<<*it;
	      
	   cout<<'\n';
	}
	return 0;
}
