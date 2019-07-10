#include <iostream>
using namespace std;

// Iterative
unsigned int CountSetBits(int n)
{
	int count = 0;
	while(n)
	{
		count+= (n&1);
		n = n>>1;	
	}
	return count;
	
}

// Recursive
unsigned int RecCountSetBits(int n)
{
	if(n==0)
	return  0;
	
	return (n&1)+RecCountSetBits(n>>1);
}
int main()
{
	int n;
	cout<<"Enter the number -->   ";
	cin>>n;
	cout<<"Number of bits set -->   "<<RecCountSetBits(n)<<endl;
}
