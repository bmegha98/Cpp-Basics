/*
Given an array A of size N having distinct elements, the task is to find the next greater element for each element of the array in order of
their appearance in the array. If no such element exists, output -1 
*/
#include<bits/stdc++.h>
using namespace std;

vector<long long int> nextGreaterElement(vector<long long int>v , long long int n)
{
    vector<long long int> res(n , -1);
    stack<long long int> s;
    for(long long int i = n-1;i>=0;i--)
    {
        while(!s.empty() && s.top() <= v[i])
            s.pop();
        if(!s.empty())
            res[i] = s.top();
        s.push(v[i]);
    }
    return res;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    vector<long long int> v(n) , res(n);
	    for(long long int i = 0;i<n;i++)
	        cin>>v[i];
	    
	    res = nextGreaterElement(v , n);
	    for(long long int i =0;i<n;i++)
	        cout<<res[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
