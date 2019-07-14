/*
Given two sorted arrays. There is only 1 difference between the arrays. 
First array has one element extra added in between. Find the index of the extra element.
*/

#include<bits/stdc++.h>
using namespace std;
int findExtra(int a[],int b[],int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n-1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			cin>>b[i];
		}
		cout<<findExtra(a,b,n)<<endl;
	}
}

int findExtra(int a[],int b[],int n)
{
  map<int,int> c1;
  for(int i = 0;i<n-1;i++)
    c1[b[i]]++;
    
  for(int j=0;j<n;j++)
  {
      if(c1.find(a[j])== c1.end())
       return j;
  }
}
