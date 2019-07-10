// Given a positive integer n, count the total number of set bits in binary representation of all numbers from 1 to n. 
#include <iostream>
using namespace std;


unsigned int CountSetBits(int n)
{
	if(n<=0)
	return 0;
	
	return (n % 2==0 ? 0 : 1 )+ CountSetBits(n/2);
	
}
int main()
{
	int n;
	cout<<"Enter value of n :  ";
	cin>>n;
	int count = 0;
	for(int i=1; i<=n;i++)
		count+= CountSetBits(i);
	
	cout<<count<<endl;
}
