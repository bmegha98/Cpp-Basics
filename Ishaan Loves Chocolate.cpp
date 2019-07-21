/*
As we know, Ishaan has a love for chocolates. He has bought a huge chocolate bar which contains N chocolate squares. Each of the square
has a tastiness level which is denoted by an array A[].Ishaan can eat the first or the last square of the chocolate at once. Ishaan has a 
sister who loves chocolates too and she demands the last chocolate square. Now, Ishaan being greedy eats the more tasty square first. 
Determine the tastiness level of the square which his sister gets.
*/

#include<iostream>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i = 0;i<n;i++)
	        cin>>A[i];
	    
	    int low = 0,high = n-1;
	    while(low < high)
	    {
	        if(A[low] >= A[high])
	         {
	             low++;
	         }
	         else
	         {
	             high--;
	         }
	    }
	    cout<<A[low]<<endl;
	}
	return 0;
}
