/*
We define f (X, Y) as number of different corresponding bits in binary representation of X and Y. 
For example, f (2, 7) = 2, since binary representation of 2 and 7 are 010 and 111, respectively. The first and the third bit differ, 
so f (2, 7) = 2.

You are given an array of N integers, A1, A2 ,…, AN. Find sum of f(Ai, Aj) for all pairs (i, j) such that 1 ≤ i, j ≤ N. Return the
answer modulo 109+7.
*/

#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
         cin>>A[i];
        int s = 0;
        for(int i=0;i<N;i++)
          for(int j = i+1;j<N;j++)
	     if(A[i]!=A[j])
             s = s+2*(__builtin_popcount (A[i]^A[j]));
        
        cout<<s % MOD<<endl;
        
    }
}

#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<bitset<32>> arr;
        int temp;
        for(int i=0;i<N;i++){
            cin>>temp;
            arr.push_back(bitset<32>(temp));
        }
        int count[31]={0};
        for(int i=0;i<31;i++){
            for(int j=0;j<N;j++){
                if(arr[j][i]==1)
                count[i]++;
            }
        }
        long int sum=0;
        for(int i=0;i<31;i++){
            sum=sum%MOD+(count[i]*(N-count[i])*2);
        }
        cout<<sum<<endl;
    }
}
