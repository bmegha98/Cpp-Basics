/*
Working with 2D arrays is quite important. Here we will do swapping of columns in a 2D array. You are given a matrix M of r rows and c 
columns. You need to swap the first column with the last column.
*/

void swap(int &x , int &y)
{
    x = x^y;
    y = x^y;
    x = x^y;
}
void interchange(int r,int c)
{
   if(c > 1)
   {
   for(int i=0;i<r;i++)
   {
      swap(arr[i][0],arr[i][c-1]);
   }
   }
  //Printing the modified matrix
    for(int i=0;i<r;i++)
	   { 
	       for(int j=0;j<c;j++)
    	    {
    	        cout<<arr[i][j]<<" ";
    	        
    	    }
    	 cout<<endl;
	   }
}
