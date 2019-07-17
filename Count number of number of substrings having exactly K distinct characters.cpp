/*
Given a string of lowercase alphabets, count all possible substrings (not necessarily distinct) that have exactly k distinct characters.
*/

#include<bits/stdc++.h>
using namespace std;

int Substrings(string s , int k)
{
    int Cnt[26];
    
    int n = s.size();
    
    int count = 0;
    
    for(int i = 0;i<n;i++)
    {
        int d = 0;
        memset(Cnt,0,sizeof(Cnt));
        for(int j = i;j<n;j++)
        {
            if(Cnt[s[j] - 'a'] == 0)
             d++;
             
            Cnt[s[j] - 'a']++;
            
            if(d == k)
             count++;
            
            if(d>k)
             break;
            
        }
    }
    
    return count;
}
int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        int K;
        cin>>K;
        
        cout<<Substrings(s,K)<<endl;
    }
	return 0;
}
