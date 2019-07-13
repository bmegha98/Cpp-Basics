/*
Given an array A (may contain duplicates) of N elements and a positive integer K. The task is to count the number of elements which occurs 
exactly floor(N/K) times in the array.
Your task is to complete the function countSpecials() which should count the elements which occurs exactly floor(N/K) times.
*/

int countSpecials(int arr[], int sizeof_array, int K)
{
    
    int f = floor(sizeof_array/K), count = 0;
    map<int,int> m;
    map<int,int>::iterator it;
    for(int i=0;i<sizeof_array;i++)
        m[arr[i]]++;
    
    for(it = m.begin();it != m.end();it++)
        if(it->second == f)
            count++;
    
    return count;
    
}
