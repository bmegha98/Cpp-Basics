/*
You are given an array A of size N. You need to do the following:

You need to xor the elements of the arrays with their respective indices(index starting from 0).
After step1, print the array.
Now, set all the elements of A to zero.
Now, print A.
*/

#include <bits/stdc++.h>
using namespace std;
void printArr(int ,int );
void setToZero(int ,int );
void xor1ToN(int , int );
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    xor1ToN(arr,n);
	    printArr(arr,n);
	    setToZero(arr,n);
	    printArr(arr,n);
	}
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;
}
void setToZero(int arr[],int n)
{
   for(int i=0;i<n;i++)
        arr[i] ^= arr[i];
}
void xor1ToN(int arr[], int n)
{
   for(int i=0;i<n;i++)
    arr[i] = arr[i]^i;
}
