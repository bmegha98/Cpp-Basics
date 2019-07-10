#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if(n <=1)
	return n;
	return fib(n-1)+fib(n-2);

}

// Using Dynamic Programming

int DPFib(int n)
{
	int A[n+1];
	memset(A,0,n+1);
	A[1] = 1;
	A[2] = 1;
	if(n<=1)
	return n;
	for(int i=2;i<=n;i++)
	A[i]=A[i-1]+A[i-2];
	
	return A[n];
}

// Optimised solution

int OPFib(int n)
{
	int a = 0, b = 1 , c;
	if(n<=1)
	return n;
	for(int i = 2;i<=n;i++)
	{
		c = a+b;
		a = b;
		b = c;
	}
	return c;	
}

// Using Direct formula Fn = {[(v5 + 1)/2] ^ n} / v5

int ForFib(int n)
{
	double phi = (sqrt(5)+1)/2;
	return round(pow(phi,n) / sqrt(5));
	
	}	
int main()
{
	int n;
	cout<<"Enter number of terms :  ";
	cin>>n;
	cout<<n<<" fibonacci term is :   "<<ForFib(n)<<endl;
	return 0;
	
}
