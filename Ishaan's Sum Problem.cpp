/*
Ishaan is curious about numbers. He takes any 2 random numbers A and B. He wants to find out that whether A can be written as a sum
of B distinct positive integers.Help him find out whether it is possible or not.
*/

#include<iostream>
using namespace std;

void Possible(int a,int b)
{
    long long int minSum = (b*(b+1))/2;
    //If a < minSum then it can't be represented with b distinct numbers
    //because min sum that can be obtained by b numbers is minSum.
    
    if(a < minSum)
    cout<<"0"<<endl;
    else
    cout<<"1"<<endl;
	
}
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    long long int A,B;
	    cin>>A>>B;
	    Possible(A,B);
	}
	return 0;
}
