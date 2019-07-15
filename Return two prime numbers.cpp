/*
Given an even number (greater than 2), return two prime numbers whose sum will be equal to given number. 
There are several combinations possible. Print only first such pair. 
*/

#include <iostream>
#include <math.h>
using namespace std;

bool Prime(int n)
{
    if(n<2)
    return false;
    for(int i = 2;i<= sqrt(n);i++)
      if(n % i == 0)
      return false;
    return true;
}
int main()
 {
  int T;
  cin>>T;
  while(T--)
  {
      int N;
      cin>>N;
      for(int i = 3;i<N-2;i++)
      {
       if(Prime(i) && Prime(N-i))
       {
        cout<<i<<" "<<(N-i)<<endl;
        break;
       }
     }
  }
	return 0;
}

//Alternative solution

#include <bits/stdc++.h>
using namespace std;

bool Prime(int N)
{
    int n = 10000;
    bool prime[n+1];
    memset(prime,true,n+1);
    int low = 2, high = 10000,sum = N;
    int i =2;
    while(i*i <= n)
    {
        if(prime[i])
        {
            for(int p = i*2;p<=n;p+=i)
             prime[p] = false;
        }
        i++;
    }
    
    while(low<=high)
    {
        if(prime[low] && prime[high]) 
        {
            if(low + high == sum)
            {
             cout<<low<<" "<<high<<endl;
             break;
            }
            else if(low+high < sum)
              low++;
            else
              high--;
        }
        else if(prime[low] == true && prime[high] == false)
        {
            high--;
        }
        else if(prime[low] == false && prime[high] == true)
        {
            low++; 
        }
        else
        {
            low++;
            high--;
        }
    }
}
int main()
 {
  int T;
  cin>>T;
  while(T--)
  {
      int N;
      cin>>N;
      Prime(N);
  }
	return 0;
}
