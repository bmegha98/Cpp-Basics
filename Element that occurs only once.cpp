//Given an array of integers. All numbers occur twice except one number which occurs once. Find the number in O(n) time & constant extra space.

/*
First Approach :
Use hashing-->
1) Traverse all elements and put them in a hash table. Element is used as key and count of occurrences is used as value in hash table.
2) Traverse the array again and print the element with count 1 in hash table.
This solution works in O(n) time, but requires extra space.

Second Approach :
The best solution is to use XOR. XOR of all array elements gives us the number with single occurrence. The idea is based on following two facts.
a) XOR of a number with itself is 0.
b) XOR of a number with 0 is number itself.

Third Approach :
If we add each number once and multiply the sum by 2, we will get twice sum of each element of the array. Then we will subtract the sum of the whole array from 
the twice_sum and get the required number (which appears once in the array).

Array [] : [a, a, b, b, c, c, d]
Mathematical Equation = 2*(a+b+c+d) - (a + a + b + b + c + c + d) 
*/
#include <bits/stdc++.h>
using namespace std;

int XOR(int A[],int n)
{
	int res = A[0];
	for(int i = 1;i<n;i++)
		res = res ^ A[i];
	
	return res;
	
}

int singleNumber(int A[],int n)
{
	map<int ,int> m;
	int sum1 = 0 , sum2 = 0;
	for(int i=0;i<n;i++)
	{
		if(m[A[i]]==0)
		{
			sum1+=A[i];
			m[A[i]]+=1;
		}
		sum2+=A[i];	
	}
	return (2*sum1)-sum2;
}

int main()
{
	int n ;
	cout<<"Enter size of array :  ";
	cin>>n;
	int A[n];
	map<int , int> hash;
	cout<<"Enter elements of array : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		hash[A[i]]+=1;
		
	}
	/*
	map<int, int>::iterator itr;
	cout<<"Element"<<'\t'<<"Count"<<endl; 
	for (itr = hash.begin(); itr != hash.end(); ++itr)
	{ 
        cout <<itr->first << '\t' << itr->second << '\n'; 
    } 
    
    for(itr = hash.begin(); itr != hash.end(); itr++)
    	if(itr->second == 1)
    	{
    		cout<<itr->first<<endl;
    		break;
		}
    */
	cout<<"Element occurring once :  "<<singleNumber(A,n)<<endl;	
	return 0;
	
}
