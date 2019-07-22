/*
Ishaan wants to intern at GeeksForGeeks but for that he has to go through a test. There are N candidates applying for the internship 
including Ishaan and only one is to be selected.
Since he wants to qualify he asks you to help him. The test is as follows.
The candidates are asked to stand in a line at positions 1 to N and given a number K. Now, every Kth candidate remains and the rest are 
eliminated. This is repeated until the number of candidates are less than K.Out of the remaining candidates, the one standing at smallest
position is selected. You need to tell Ishaan at position he must stand to get selected.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    vector<int> A; 
	    for(int i = 1;i<=n;i++)
	     A.push_back(i);
	     
	   while(A.size() >= k)
	   {
	  		vector<int> temp;
	  		for(int i = k-1;i< A.size();i+=k)
	  		    temp.push_back(A[i]);
	  		
	  		A.clear();
	  		for(int j = 0;j<temp.size();j++)
	  		 A.push_back(temp[j]);
      
	   }
	   
	  cout<<A[0]<<endl;
	}
	return 0;
}
