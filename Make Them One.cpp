/*
Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then
make all the cells of ith row and jth column as 1.
*/

#include <bits/stdc++.h>
using namespace std;
// Global Declaration of arrays
// a : input array
// ar : auxiliary array
// ac : auxiliary array
int a[1000][1000];
int ar[1000];
int ac[1000];
// Function Prototype
void makeThemOne(int, int);
//Position this line where user code will be pasted.
// Driver Code
int main() {
	
	int testcase;
    cin >> testcase;
    while(testcase--){
    
    // r : number of rows
    // c : number of columns
    int r,c;
    cin >> r >> c;
    
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            cin >> a[i][j];
        }
    }
    
    makeThemOne(r, c);
    }
	
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Back-end complete function Template for C++
/* Funtion to make all rows and colums one
*  r : number of rows
*  c : number of columns
*  Note : arr is declared globally, you can
*  use arr in your function
*/
void makeThemOne(int r, int c)
{
    for(int i = 0;i<r;i++)
      ar[i] = 0;
    for(int j=0;j<c;j++)
      ac[j] = 0;
      
   for(int i=0;i<r;i++)
   {
   for(int j=0;j<c;j++)
   {
   if(a[i][j] == 1)
   {
       ar[i] = 1;
       ac[j] = 1;
   }
   }
   }
   
   for(int i=0;i<r;i++)
   {
   for(int j=0;j<c;j++)
   {
       if(ar[i] == 1 || ac[j] == 1)
         a[i][j] = 1;
       
        
        cout<<a[i][j]<<" ";
   }
   cout<<endl;
   }
   
    
    
}
