/*
Given an array A of N positive integers. The task is to swap every ith element of the array with (i+2)th element.
*/

void swap(int &x , int &y)
{
    x = x^y;
    y = x^y;
    x = x^y;
}
void swapElements(int arr[], int sizeof_array)
{
    for(int i = 0;i<sizeof_array-2;i++)
    {
        swap(arr[i],arr[i+2]);
    }
}
