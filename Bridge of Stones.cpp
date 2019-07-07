/*
There is a stone bridge connecting India to Srilanka. First stone starting from India is having 1 inscribed on it, and last stone is on
Srilankan side. Each subsequent stone has two consecutive numbers on it except the last stone which may have one or two numbers inscribed 
on it depending on value of N.
Stones may be aligned as : 1, (2, 3), (4, 5), (6, 7)... N.

You are given a number N representing the last number on the last stone; and a number X. The task is to find the minimum number of jumps 
you need from either Indian side or Srilankan side to reach the stone that has X inscribed on it.
Note: Jumping on first stone will be counted as 0 jumps.
*/
void findJumps(int N, int X)
{
 int size = ((N-1)/2)+((N-1)%2)+1;
 int jump1 = -1, jump2 = -1;
 if(X == 1)
 jump1 = 0;
 else
 {
     for(int i = 2;i<=N;i+=2)
     {
         if(X == i || X == i+1)
         {
             jump1 = i/2;
             break;
         }
     }
 }
 
 jump2 = size -jump1-1;
 int min = jump1 < jump2 ? jump1 : jump2;
 
    cout <<min<< endl;
    
}
