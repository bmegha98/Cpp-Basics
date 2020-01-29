#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	//Dynamic allocation of 2D array
	int r = 3,c = 4,count = 0;
	/*first method -->   Using single pointer
	int* A = (int*)malloc(r*c*sizeof(int));
	for(int i =0;i<r;i++)
		for(int j =0;j<c;j++)
			*(A + i*c + j) = ++count;
	
	for(int i =0;i<r;i++)
	{
		for(int j =0;j<c;j++)
		{
			cout<<*(A + i*c + j)<<'\t';
		}
		cout<<endl;
	}
	delete A;
	*/
	
	/*Second method -->   Using an array of pointers 
	int* A[r];
	for(int i=0;i<r;i++)
		A[0] = (int*)malloc(c*sizeof(int));
	
	for(int i =0;i<r;i++)
		for(int j =0;j<c;j++)
			*(*(A + i) + j) = ++count;
	
	for(int i =0;i<r;i++)
	{
		for(int j =0;j<c;j++)
		{
			cout<<*(*(A + i) + j)<<'\t';
		}
		cout<<endl;
	}
	
	*/
	
	/*Third method --> Pointer to pointer
	int** A = (int**)malloc(r*sizeof(int*));
	for(int i =0;i<r;i++)
		*(A+i) = (int*)malloc(c*sizeof(int));
	
	for(int i =0;i<r;i++)
		for(int j =0;j<c;j++)
			*(*(A + i) + j) = ++count;
	
	for(int i =0;i<r;i++)
	{
		for(int j =0;j<c;j++)
		{
			cout<<*(*(A + i) + j)<<'\t';
		}
		cout<<endl;
	}
	delete A;
	*/
	
	//Fourth method  --> double pointers
	
	int** A;
	int* ptr;
	int len = sizeof(int*)*r + sizeof(int)*r*c;
	A = (int**)malloc(len);
	ptr = (int*)A+r;    //ptr is pointer to int 
	
	for(int i=0;i<r;i++)
		A[i] = ptr+i*c;
	
	for(int i =0;i<r;i++)
		for(int j =0;j<c;j++)
			*(*(A + i) + j) = ++count;
	
	for(int i =0;i<r;i++)
	{
		for(int j =0;j<c;j++)
		{
			cout<<*(*(A + i) + j)<<'\t';
		}
		cout<<endl;
	}
	delete A;
	
				
	return 0;
}
