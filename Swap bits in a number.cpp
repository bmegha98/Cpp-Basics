#include <bits/stdc++.h>

using namespace std;

void decToBinary(int n) 
{ 
    // Size of an integer is assumed to be 32 bits 
    for (int i = 31; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
            cout << "1"; 
        else
            cout << "0"; 
    } 
}
int SwapBits(int num,int p1,int p2, int n)
{
		/* Move all bits of first set to rightmost side */
		unsigned int set1 = (num>>p1)&((1U<<n) -1);
		
		/* Move all bits of second set to rightmost side */
		unsigned int set2 = (num>>p2)&((1U<<n)-1);
	
		/* Xor the two sets */
		unsigned int Xor = (set1 ^ set2);
		
		/* Put the Xor bits back to their original positions */
		Xor = (Xor<<p1) | (Xor<<p2);
		
		/* Xor the 'Xor' with the original number so that the two sets are swapped */
		unsigned int res = (num ^ Xor);
		/*
			int x = x^y;
			int y = x^y;
			int x = y^x;
		*/
		
		return res;	
 } 
int main()
{
	decToBinary(1U);
	cout<<endl;
	int num,p1,p2,n;
	cout<<"Enter the number -->   ";
	cin>>num;
	cout<<"Enter Starting position -->   ";
	cin>>p1;
	cout<<"Enter Ending position -->   ";
	cin>>p2;
	cout<<"Enter number of bits to be swapped -->   ";
	cin>>n;
	
	cout<<"After swapping bits, number is ---->  "<<SwapBits(num,p1,p2,n)<<endl;
	return 0;
}
