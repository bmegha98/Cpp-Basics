/*
Given a number N. The task is to print word accordring to the directions given below:
1. If N is divisible by 3, print "Fork" (without quotes).
2. If N is divisible by 5, print "CPP" (without quotes).
3. If N is divisible by both 3 and 5, print "Fork CPP" (without quotes).|
4. If N ia neither divisible by 3 nor 5, print nothing.
*/

void forkCPP(int N)
{
    
    if(N % 3 == 0)
    {
    if(N % 5 == 0)
    cout<<"Fork CPP"<<endl;
    else
    cout<<"Fork"<<endl;
    }
    else if(N % 5 == 0)
    cout<<"CPP"<<endl;
    else
    cout << endl;  
}
