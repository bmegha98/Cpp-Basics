#include <bits/stdc++.h>
using namespace std;

string returnFloatingPart(string fnum)
{
	int pos = fnum.find('.');
	if(pos == string::npos)
	return "";
	return fnum.substr(pos + 1);
}

bool containsOnlyDigit(string num)
{
	int len = num.size();
	for(int i=0 ; i<len;i++)
	{
		if(num[i]<'0' || num[i] > '9')
			return false;
	}
	return true;
}

string replaceBlankWith20(string urlex)
{
	string rep = "%20";
	int n = 0;
	while((n = urlex.find(' ',n))!= string::npos)
	{
		urlex.replace(n,1,rep);
		n+= rep.length();
	}
	return urlex;
}
int main()
{
    string fnum = "23.342";
    cout << "Floating part is : " << returnFloatingPart(fnum)<< endl;

    string num = "3452";
    if (containsOnlyDigit(num))
        cout << "string contains only digit" << endl;

    string urlex = "google com in";
    cout << replaceBlankWith20(urlex) << endl;
    
    return 0;      
}
