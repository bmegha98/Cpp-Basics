/*
Create objects of a rectangle struct and find the maximum area of a rectangle.
Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input. The 
first line contains N denoting the number of rectangle objects to be created. The next line contains 2*N elements denoting the length and 
breadth of N rectangles.
Output Format:
For each testcase, in a new line, print the maximum area.
Your Task:
Since this is a function problem, you don't need to take any input. Just complete the area and maxArea functions.
*/

#include <bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
    Rectangle(){}
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    
};
int area(Rectangle r);
void maxArea(Rectangle arr[],int n);
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;//Number of rectangle objects
	    Rectangle arr[n]; //array of rectangle objects
	    for(int i=0;i<n;i++)
	    {
	        int l,b;
	        cin>>l>>b; //length and breadth of a object
	        Rectangle r(l,b); //creating a object r
	        arr[i]=r; //fill the array
	    }
	    maxArea(arr,n); //function to calculate maxArea
	}
	return 0;
}
int area(Rectangle r)
{
   //return length*breadth
   return r.length * r.breadth;
}
void maxArea(Rectangle arr[],int n)
{
   int max = area(arr[0]);
   //Your code here. Use area function to calculate area of a reactangle object
   for(int i = 1;i<n;i++)
   {
      int temp = area(arr[i]);
      if(max < temp)
         max = temp;
   }
    cout<<max<<endl;
}
