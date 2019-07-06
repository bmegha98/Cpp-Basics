/* Precision of floating-point numbers in C++ :

Precision defines how many significant digits it can represent(after decimal) without information loss.
cout has default precision of 6 and it truncates anything after that.

Given below are few methods which are used to provide precision to floating point numbers in C++:
1. floor() --> gives nearest integer that is lower than given value.
2. ceil() --> gives nearest integer that is greater than the given value.
3. trunc() --> removes digits after decimal point.
4. round() --> gives closest integer (.[0-0.5) --> floor and .[0.5-0.9] --> ceil)
5. setprecision () --> Setprecision when used along with 'fixed' provides precision to floating point numbers correct to decimal numbers 
                        mentioned in the brackets of the setprecison.
                        0 is appended to floating point digit to match the precision mentioned by the user.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x =1.411, y =1.500, z =1.711;
    double a =-1.411, b =-1.500, c =-1.611;
    double pi = 3.14159, npi = -3.14159;
    cout << " floor values "<<endl;
    cout << floor(x) << endl;	//1
    cout << floor(y) << endl;	//1
    cout << floor(z) << endl;	//1

   
    cout << floor(a) << endl;	//-2
    cout << floor(b) << endl;	//-2
    cout << floor(c) << endl;	//-2
    
    cout<<"ceil values "<<endl;
    cout << ceil(x) << endl;	//2
    cout << ceil(y) << endl;	//2
    cout << ceil(z) << endl;	//2

   
    cout << ceil(a) << endl;	//-1
    cout << ceil(b) << endl;	//-1
    cout << ceil(c) << endl;	//-1
    
    cout<<"truncate values "<<endl;
    cout << trunc(x) << endl;	//1
    cout << trunc(y) << endl;	//1
    cout << trunc(z) <<endl;	//1
    
    cout << trunc(a) << endl;	//-1
    cout << trunc(b) << endl;	//-1
    cout << trunc(c) <<endl;	//-1
    
    cout<<"round-off values "<<endl;
    cout << round(x) << endl;	//1
    cout << round(y) << endl;	//2
    cout << round(z) << endl;	//1

    cout << round(a) << endl;	//-1
    cout << round(b) << endl;	//-2
    cout << round(c) << endl;	//-2
    
    cout<<"setprecision values "<<endl;
    
    cout << fixed << setprecision(0) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(1) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(2) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(3) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(4) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(5) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(6) << pi <<" "<<npi<<endl;
    return 0;
}

