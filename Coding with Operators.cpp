/*
Given three positive integers A, B and C. The task is to do the following operations one by one and print the results correspondingly.

Operation 1:  Print A raised to the power of B.  Let the power be P, i.e., P = POW(A, B).
Operation 2:  Print XOR of P with C.
Operation 3:  Print remainder of P when divided with C.

Hint : Storing powers of large numbers in an int may cause overflow, so make sure that you choose long long int for storing result.
*/

void operations(int a, int b, int c)
{
    long long int P;
    P = pow(a,b);
    cout<<P<<endl;
    
    long long int x = (P^c);
    cout<<x<<endl;
    
    long long int rem = P % c;
    cout<<rem<<endl;
    
}
