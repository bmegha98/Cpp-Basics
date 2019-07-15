/*
Given a 32 bit number x, reverse its binary form and print the answer in decimal.
*/

#include <iostream>
#include <math.h>
using namespace std;

void Reverse(int n)
{
    int A[32]= {0};
    int i = 0;
    long long int sum = 0;
    while(n>0)
    {
        A[i] = n%2;
        i++;
        n = n/2;
    }
    int k = 0;
    for(int j = 31;j>=0;j--)
    {
        if(A[j]!=0)
        sum += (A[j]* pow(2,k));
        k++;
        
    }
     
    cout<<sum;
}
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    Reverse(N);
	    cout<<endl;
	}
	return 0;
}
