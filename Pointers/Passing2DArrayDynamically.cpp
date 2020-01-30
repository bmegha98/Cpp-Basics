#include<iostream>
using namespace std;

/* Using an array of pointers
#define m 3
void Print(int* A[m])
{
	for(int i=0;i<m;i++)
	{
		for(int j =0;j<3;j++)
			cout<<*(*(A + i) + j)<<'\t';
		cout<<endl;
	}
		
}

int main()
{
	int* arr[3];
	for(int i =0;i<3;i++)
		arr[i] = new int[3];
	int count = 0;
	for(int i=0;i<3;i++)
	{
		for(int j =0;j<3;j++)
			*(*(arr + i) + j)= ++count;
	}
	
    Print(arr);
	return 0;
}
*/

/*  Using single pointer
void Print(int* A,int m,int n)
{
	for(int i =0;i<m;i++)
	{
		for(int j =0;j<n;j++)
			cout<<*(A + i*n + j)<<'\t';
		cout<<endl;
	}
}
int main()
{
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    Print((int*)arr,3,3);
	return 0;
}
*/
/* Using Pointer to Pointer */
void Print(int** A,int m,int n)
{
	for(int i =0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<*(*(A+i)+j)<<'\t';
		cout<<endl;
	}
}

int main()
{
	int m = 3, n= 3,count = 0;
	int** arr = new int* [m];
	for(int i=0;i<m;i++)
		arr[i] = new int[n];
	
	for(int i =0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			*(*(arr+i)+j)= ++count;
	}
	Print(arr,m,n);
	
	
}
