/*
Constuctors //a type of function
--member function used to initialize the data members of a class
--has same name as that of class 
--has NO return type, not even void
--automatically called when object is created
--defined in public section of the class 

*/
#include<iostream>
using namespace std;
class classname
{
	int a,b;
	public:
		classname()// default type constuctor since no arguments
		{
			a=10;b=20;
			cout<<"hello";
		}
		void fun()
		{
			cout<<a<<b;
		}
};
int main()
{	classname z;
	z.fun();
}
