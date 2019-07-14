/*
You are given a string s of x and y. You need to verify whether the string follows the pattern xnyn. That is the string is valid only if
equal number of ys follow equal number of xs.
As an example: xxyyxxyy is valid. xy is valid. xxyyx is invalid. xxxyyyxxyyxy is valid.
*/

#include <bits/stdc++.h>
using namespace std;
void follPatt(string );

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    follPatt(s);
	   
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/

void follPatt(string s)
{
   int i =0;
   bool flag = true;
   while(i<s.length())
   {
       int count1 = 0,count2 = 0;
       while(s[i] == 'x')
       {
         count1++;
         i++;
       }
       
       while(s[i] == 'y')
        {
         count2++;
         i++;
        }
        if(count1!=count2)
        {
            flag = false;
            break;
        }
   }
   if(flag)
    cout<<'1'<<endl;
   else
    cout<<'0'<<endl;
}
