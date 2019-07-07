/*
You will be given four different variables of different data types: a (int), b (float), c (double), l (long long), d (string). Your task 
is to do step-wise operations as given below:
1. Divide b by c.
2. Divide b by a.
3. Divide c by a (cast to int).
4. Add result of step 3 with l.
5. Print the given string, and the 4th (0-based indexing) character of the string both separated by a space.
*/

void dataTypes(int a, float b, double c, long long l,string d)
{
    double p = b/c ; //do b/c
    
    float q = b/a ; //do b/a
    
    int r =  c/a ; // do c/a
    
    long long m = r + l;//do r+l
    
    cout << p << " " << q << " " << r <<" "<< m <<endl;
    
    cout << d << " " << d[3] << endl;//write 3 for index
}
