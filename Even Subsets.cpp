/*
Given an array A of N elements. The task is to count all the subsets whose sum is even.
*/

#include<bits/stdc++.h>
using namespace std;
// Function prototype
int countSumSubsets(int[], int);
//Position this line where user code will be pasted.
// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	            cin >> arr[i];
	        }
	    
	    cout << countSumSubsets(arr, N) << endl;
	}
	
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*Function to count subset with even sum
* arr : array input
* N : size of array
*/
int countSumSubsets(int arr[], int N)
{
    int count = 0;
    for(int i = 1; i< pow(2,N);i++)
    {
        int sum = 0;
        for(int j = 0;j<N;j++)
        {
            if((i>>j) & 1)
            sum+= arr[j];
        }
        if(sum % 2 == 0)
            count++;
    }
   return count; 
    
}
