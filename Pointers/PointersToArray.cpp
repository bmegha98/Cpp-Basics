#include<iostream>
using namespace std;

int main()
{
	int A[] = {10,20,30,23,34};
	//pointer to first element of array A
	int* p = A;
	//pointer to an array of 5 integers
	int (*ptr)[5] = &A;
	cout<<" p : "<<p<<endl;
	cout<<" ptr : "<<ptr<<endl;
	
	cout<<"Value at p ->  "<<*p<<endl;
	cout<<"Value at ptr ->  "<<*ptr<<endl;     //points to array ;gives address of array
	
	p++;
	ptr++;
	cout<<"After incrementing : "<<endl;
	cout<<" p : "<<p<<endl;   //points to A[1]
	cout<<" ptr : "<<ptr<<endl; //incremented forward by sizeof(A)

	return 0;
}
