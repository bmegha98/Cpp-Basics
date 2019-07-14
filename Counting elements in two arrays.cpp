/*
Given two unsorted arrays arr1[] and arr2[]. They may contain duplicates. For each element in arr1[] count
elements less than or equal to it in array arr2[].
*/

void countEleLessThanOrEqual(int arr1[], int arr2[],int m, int n)
{
    map<int,int> c;
    sort(arr2,arr2+m);

    for(int i = 0;i<m;i++)
        {
            if(c.find(arr1[i]) != c.end())
                cout<<c[arr1[i]]<<" ";
            else
            {
                int count = 0;
                for(int j=0;j<n;j++)
                {
                if(arr2[j]<= arr1[i])
                    count++;
                
                }
          
            c[arr1[i]] = count;
            cout<<count<<" ";
            }
        }
    
}
