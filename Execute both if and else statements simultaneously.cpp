/*
Execute both if and else statements simultaneously :

only one of the block of if-else statement will execute according to the condition of Boolean expression. But we can able to make our 
program so that both the statements inside if and else will execute simultaneously.
Use goto statement which provides an unconditional jump from the 'goto' to a labelled statement in the same function.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x ;
    cout<<"Enter your name :  ";
    cin>>x;
    if(x!="")
    {
    	label_1 : cout<<"Hello ";
    	goto label_2;
	}
	else
	{
		goto label_1 ;
		label_2 : cout<<x<<endl;
	}
	return 0;
}
    
