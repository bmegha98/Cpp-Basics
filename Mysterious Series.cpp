/*
Ishaan is an adventurous guy. Today while wandering in a forest he found a cave. Bravely enough he enters the cave and finds some numbers 
carved on the walls of the cave which seemed to form a mysterious series.
But some of the numbers were missing. Now, Ishaan wants to complete the series. Help him find the Nth term of the series.
N    Nth term
1    5
2    10
3    26
4    50
5    122
.
.
.
10    842
*/

#include<bits/stdc++.h>
using namespace std;

int NPrime(int num)
{
    if(num == 1)
     return 2;
     
    int n = 2;
    vector<int> p;
    p.push_back(n);
    n++;
    
    while(true)
    {
        bool f = true;
        for(int i = 2;i<=sqrt(n);i++)
          if(n % i == 0)
          {
              f = false;
              break;
          }
          if(f)
		  {
		  	if(p.size() != num)
             p.push_back(n);
            else
            	break;
		  }
          
        n++;
    }
    
    return p[p.size()-1];   
}
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    long long int res = NPrime(n);
	    unsigned long long int p = pow(res,2);
	    cout<<(1 + p)<<endl;
	}
	return 0;
}
