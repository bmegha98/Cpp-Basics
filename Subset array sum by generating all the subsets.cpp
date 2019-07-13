/*Given an array of size N and a sum, the task is to check whether some array elements can be added to sum to N . 

Note: At least one element should be included to form the sum.(i.e. sum cant be zero) 
*/

//logic is run a loop form 0 to (2^n)-1 and for each element add that element which has 1 at its corresponding index.

#include <iostream>
#include <math.h>
using namespace std;

void SubsetSum(int A[],int n,int s)
{
	for(int i =1;i<pow(2,n);i++)
	{
		int sum = 0;
		for(int j = 0;j<n;j++)
			if((i>>j) & 1)
			sum += A[j]; 
			
		if(sum == s)
		{
			cout<<"Yes"<<endl;
			return;
		}
	}
	cout<<"No"<<endl;
}
int main()
{
	int n,s;
	cout<<"Enter size of array --  ";
	cin>>n;
	int A[n];
	cout<<"Enter elements of array "<<endl;
	for(int i=0;i<n;i++)
		cin>>A[i];
	cout<<"Enter sum -->  ";
	cin>>s;
	cout<<"Does array contain a subset whose sum is equal to "<<s<<" ??  ";
	SubsetSum(A,n,s);
	return 0;
	
}
