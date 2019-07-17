/*
Given a string consisting of spaces,\t,\n and lower case  alphabets.
Your task is to count the number of words where spaces,\t and \n work as separators.
*/

#include<iostream>
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
	   
	    int count = 0,flag = 0;
	    int i =0;
	    while(i < s.length())
	    {
	    	if(s[i] == ' ')
	    	flag = 0;
	        else if(s[i] == '\\')
	        {
	            if(i != s.length()-1)
	            {
	                if(s[i+1] == 't' || s[i+1] == 'n')
	                {
	        	        flag = 0;
	        	          i++;
	                }
	            }
			}
			
			else if(s[i] >='a' && s[i] <='z' && flag == 0)
			{
				flag = 1;
				count++;
			}
			
	        i++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
