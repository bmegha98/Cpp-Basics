#include<iostream>
using namespace std;

int main()
{
	int A[][4] = {{ 10, 11, 12, 13 },
                  { 20, 21, 22, 23 },
                  { 30, 31, 32, 33 }
				 };
				 
	//(arr + i)  =  arr[i]  -  Base address of ith 1-D array -> Points to 0th element of ith 1-D array
				 
	for(int i =0;i<3;i++)
	{
		cout<<"Address of "<<i<<"th array :  "<<A[i]<<"\t"<<*(A+i)<<endl;
		for(int j =0;j<4;j++)
		{
			cout<<"A["<<i<<"]["<<j<<"] :  "<<*(A+i)+j<<"\t"<<*(*(A+i)+j)<<endl;
		}
	}
	

	return 0;
}
