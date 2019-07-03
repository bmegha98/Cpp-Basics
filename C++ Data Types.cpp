/*
Data types are used to tell the variables the type of data it can store.
Data types in C++ are mainly divided into two categories :
    1. Primitive data types --> built-in or predefined data types
          a. Integer(int)               => To store integers                            => 4 bytes
          b. Character(char)            => To store characters                          => 1 byte
          c. Boolean(bool)              => To store boolean/logical values              => 1 byte
          d. Floating-point(float)      => To store single-precision decimal values     => 4 bytes
          e. Double Floating-point(double) => To store double-precision decimal values  => 8 bytes
          f. Void(void)                 => Void data type is used for those function which does not returns a value.
          g. Wide Character(wchar_t)    => Also a character data type but has greater size than char data type.    => 2-4 bytes
    
    2. Abstract / user-defined data types --> defined by user itself. Example - class or structure.
    
Data Modifiers are used with primitive data types to modify the length of data that a particular data type can hold.
There are 4 types of data modifiers in C++ :
  1. Unsigned       -> For positive numbers
  2. Signed         -> For positive as well as negative numbers
  3. short
  4. long
*/

#include <iostream>
using namespace std;
int main()
  {
  cout<<"Size of char : "<<sizeof(char)<<" bytes"<<endl;
  cout<<"Size of unsigned char : "<<sizeof(unsigned char)<<" bytes"<<endl;
  
  cout<<"Size of int : "<<sizeof(int)<<" bytes"<<endl;
  cout<<"Size of Unsigned int : "<<sizeof(unsigned int)<<" bytes"<<endl;
  cout<<"Size of short int : "<<sizeof(short int)<<" bytes"<<endl;
  cout<<"Size of unsigned short int : "<<sizeof(unsigned short int)<<" bytes"<<endl;
  cout<<"Size of long int : "<<sizeof(long int)<<" bytes"<<endl;
  cout<<"Size of unsigned long int : "<<sizeof(unsigned long int)<<" bytes"<<endl;
  cout<<"Size of long long int : "<<sizeof(long long int)<<" bytes"<<endl;
  
  cout<<"Size of bool : "<<sizeof(bool)<<" bytes"<<endl;
  
  cout<<"Size of float : "<<sizeof(float)<<" bytes"<<endl;
  cout<<"Size of double : "<<sizeof(double)<<" bytes"<<endl;
  cout<<"Size of long double : "<<sizeof(long double)<<" bytes"<<endl;
  
  cout<<"Size of Wide Character : "<<sizeof(wchar_t)<<" bytes"<<endl;
  
  return 0;
  }
