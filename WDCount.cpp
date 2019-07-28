//Determine number of words using enumeration

#include<iostream>
#include<conio.h>
using namespace std;

enum isaWord {No,Yes};
int main()
{
	isaWord w = No;
	char ch;
	int wdcount = 0;
	cout<<"Enter string -->"<<endl;
	do
	{
		ch = getche();
		if(ch == ' ' || ch == '\r' || ch == '\t')
		{
			if(w == Yes)
			{
				wdcount++;
				w = No;
			}
		}
		else
		{
			if(w == No)
			 w = Yes;
		}
	}while(ch != '\r');
  
  return 0;
}
