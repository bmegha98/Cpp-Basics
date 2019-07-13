#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cout<<"Enter string --  ";
	
	//cin>> s;  cout<<s<<endl;         only first word
	/*Input Functions
	1. getline()
	2. push_back()
	3. pop_back()				In C++11
	*/
	
	getline(cin,s);						//geeks for geek
	cout<<s<<endl;
	s.push_back('s');					//geeks for geeks
	cout<<s<<endl;
	//s.pop_back();						geeks for geek
	
	/*Capacity Functions
	1. capacity()
	2. resize()
	3. shrink_to_fit()
	*/
	cout<<"capacity of string :  "<<s.capacity()<<endl;
	s.resize(5);
	cout<<"After resize , string :  "<<s<<endl;
	//s.shrink_to_fit();
	
	/*Iterator Functions
	1. begin()
	2. end()
	3. rbegin()
	4. rend()
	*/
	
	string str = "geeksforgeeks";
	string::iterator it;
	string::reverse_iterator it1;
	
	for(it = str.begin(); it != str.end();it++)
		cout<<*it;
	cout<<endl;
	
	for(it1 = str.rbegin(); it1 != str.rend(); it1++)
		cout<<*it1;
	cout<<endl;
	
	/*Manipulating Functions
	1. copy()
	2. swap()
	*/
	
	char A[80];
	string str1 = "geeksforgeeks is for geeks";

    string str2 = "geeksforgeeks rocks";
	str1.copy(A , 13, 0);
	A[13]='\0';
	
	cout<<"Character array --  "<<A<<endl;
	cout<<"String1 and String2 before swapping -->  "<<str1<<" || "<<str2<<endl;
	str1.swap(str2);
	cout<<"String1 and String2 After swapping -->  "<<str1<<" || "<<str2<<endl;
	
	return 0;
}
