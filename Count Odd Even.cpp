/*
Given an array A of N elements. The task is to count number of even and odd elements in the array.
print the number of odd elements first and then number of even elements seperated by space in a single line.
*/

void countOddEven(int arr[], int sizeof_array)
{
    
  int countodd = 0 , counteven = 0;
  for(int i=0;i<sizeof_array;i++)
  {
      if(arr[i]%2 == 0)
       counteven++;
      else
        countodd++;
  }
   cout<<countodd<<" "<<counteven<<endl; 
}
