/*
Given a sentence in the form of a string in uppercase, convert it into its equivalent mobile numeric keypad sequence.
*/

#include<bits/stdc++.h>
using namespace std;
	
	
int main()
 {
	int T;
	cin>>T;
	cin.ignore();
	while(T--)
	{
	    string s;
	    getline(cin,s);
	    string res = "";
	    for(int i = 0;i<s.size();i++)
	    {
	        if(s[i] == 32)
	          res += '0';
	        else
	        {
	        switch(s[i]-'A')
	        {
	            
	            case 2 : res += '2';
	            case 1 : res += '2';
	            case 0 : res += '2';
	                        break;
	           case 5 : res += '3';
	           case 4 : res += '3';
	           case 3 : res += '3';
	                    break;
	           case 8 : res += '4';
	           case 7 : res += '4';
	           case 6 : res += '4';
	                        break;
	           case 11 : res += '5';
	           case 10 : res += '5';
	           case 9 : res += '5';
	                        break;
	           case 14 : res += '6';
	           case 13 : res += '6';
	           case 12 : res += '6';
	                        break;
	           case 18 : res += '7';
	           case 17 : res += '7';
	           case 16 : res += '7';
	           case 15 : res += '7';
	                        break;
	           case 21 : res += '8';
	           case 20 : res += '8';
	           case 19 : res += '8';
	                        break;
	           case 25 : res += '9';
	           case 24 : res += '9';
	           case 23 : res += '9';
	           case 22 : res += '9';
	                        break;
	               
	        }
	        }
	    }
	    cout<<res<<endl;
	}
	
	return 0;
}
