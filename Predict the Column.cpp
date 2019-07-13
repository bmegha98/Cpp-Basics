/*
Given a matrix(2D array) M of size N*N consisting of 0s and 1s only. The task is to find the column with maximum number of 0s.
*/
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*Function to count zeros in each column
* N : Number of rows and columns in array
M is the matrix that is globally declared
*/
int columnWithMaxZeros(int N)
{
    int count = 0,ind = -1;
    for(int col = 0;col<N;col++)
    {
        int c = 0;
        for(int row = 0;row<N;row++)
        {
            if(M[row][col] == 0)
                c++;
        }
        if(c > count)
        {
            count = c;
            ind = col;
        }
    }
    
    return ind;
}
