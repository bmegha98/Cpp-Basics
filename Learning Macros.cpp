/*
Macro is one of the most important part of CPP preprocessors. It allows us to define variables and functions and it basically works by
substituting the value or function during the preprocessing stage of code conversion(High level to Low level). 

You are given two inputs: a(integer),and b(integer). You need to print a * b .
*/
#include <iostream>
using namespace std;
#define MULTI(a,b) (a*b)
int main()
{
  int a,b;
  cin>>a>>b;
  int res = MULTI(a,b);
  cout<<"After multiplication : "<<res<<endl;
  return 0 ;
}
