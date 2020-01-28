/*
There are two types of pointers : Normal pointers and Smart pointers
In case of normal pointers , We must do delete(ptr) to avoid memory leak.
*/

#include<iostream>
using namespace std;

class Test
{
private:
  int x;
  int y;
public:
  Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
  void setX(int a) { x = a; }
  void setY(int b) { y = b; }
  void destroy()  
  { 
      cout<<"deleted"<<endl;
      delete this; }
  void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
  Test* obj = new Test;
  obj->destroy();
  obj->print(); //gives garbage value
  return 0;
}

/*
Using smart pointers, we can make pointers to work in way that we don't need to explicitly call delete. 
Smart pointer is a wrapper class over a pointer with operator like * and -> overloaded. 
The objects of smart pointer class look like pointer, but can do many things that a normal pointer can't like automatic destruction (yes, 
we don't have to explicitly use delete), reference counting and more.
The idea is to make a class with a pointer, destructor and overloaded operators like * and ->. 
Since destructor is automatically called when an object goes out of scope, the dynamically allocated memory would automatically deleted.
*/

//Making generic smart pointers class

#include<iostream>
using namespace std;

template<class T>
class SmartPtr
{
	T* ptr;
	public:
		//Constructor
		//explicit keyword is used to avoid automatic conversion from basic to user defined data type
		explicit SmartPtr(T* p = NULL)
		{
			ptr = p;
		}
		//destructor
		~SmartPtr()
		{
			delete ptr;
		}
		//Overloading dereferencing operator (*)
		T &operator * ()
		{
			return *ptr;
		}
		//Overloading -> operator
		T* operator -> ()
		{
			return ptr;
		}
};

int main()
{
  SmartPtr<int> ptr(new int());
  *ptr = 50;
  cout<<*ptr<<endl;
  return 0;
}
