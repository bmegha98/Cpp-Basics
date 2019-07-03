/*
In C++ input and output is performed in the form of sequence of bytes or more commonly known as streams.
  1. Input Stream ->  direction of flow of bytes is from device(for example: Keyboard) to the main memory 
  2. Output Stream -> direction of flow of bytes is opposite, i.e. from main memory to device( display screen )
  
Header files available in C++ for Input - Output operation are:

  1. iostream -> stands for standard input output stream. It contains definitions to objects like cin, cout, cerr etc.
  2. iomanip  -> stands for input output manipulators. The methods declared in this files are used for manipulating streams.
                 It contains definitions of setw, setprecision etc.
  3. fstream  -> This header file mainly describes the file stream. It is used to handle the data being read from a file as input or data
                 being written into the file as output.
                 
Standard output stream (cout) :
   1. cout is the instance of the ostream class. 
   2. cout is used to produce output on the standard output device which is usually the display screen. 
   3. The data needed to be displayed on the screen is inserted in the standard output stream (cout) using the insertion operator (<<).
 
Standard input stream (cin) :
  1. cin is the instance of istream class.
  2. It is used to read input from standard input device which is usually the keyboard.
  3. Extraction operator(>>) is used along with object cin for reading inputs.
  4. The extraction operator extracts the data from the object cin which is entered using the keboard.
  
Un-buffered standard error stream (cerr) : 
  1. cerr is the standard error stream which is used to output the errors. 
  2. This is also an instance of the ostream class.
  3. As cerr is un-buffered so it is used when we need to display the error message immediately. It does not have any buffer to store the
     error message and display later.
     
buffered standard error stream (clog) : 
  1. This is also an instance of ostream class and used to display errors.
  2. Unlike cerr the error is first inserted into a buffer and is stored in the buffer until it is not fully filled. 
     The error message will be displayed on the screen too.
     
** In C++, if we need to read few sentences from a stream, the generally preferred way is to use getline() function.
   It can read till it encounters newline or sees a delimiter provided by user. getline(cin,str); **
    
*/

#include <iostream>
using namespace std;
int main()
  {
    char s[] = {'s','a','m','p','l','e'};
    int x;
    cout<<"Enter your age : ";
    cin>>x;
    if(x<=0)
    cerr<<"!!! Age cannot be negative!!! "<<endl;
    cout<<"Character Array :"<<endl;
    for(int i=0;i<6;i++)
      cout<<s[i]<<" ";
    cout<<endl;
    
    return 0;
   }
