/*

Had the function been overloaded as a friend something like this:

friend myclass operator++(myclass ob)
  {
    ob.a++;
    ob.b++;

    return ob;
  }
Then the operand’s copy (not the actual object that generated the call) would have been passed to
the function and any change (a++ and b++) would only have incremented the data of the copy of the
object passed (call by value) and the data of the operand would have remained unchanged.

To overcome this we need to accept the reference of the object (call by reference) as the argument 
to overload the operators as a friend.*/
#include<iostream>
#include<conio.h>
using namespace std;
class inc	
{
	
	public:
		int x;
		void getdata(int a)
		{
			x=a;
		}
		void display()
		{
			cout<<x<<endl;
		}
		friend void operator++(inc &b1);
		void operator++()
		{
			x=10;
		}
		
};
void operator++(inc &b1)
{
	b1.x=++b1.x;
}
int main()
{
	inc b; 
	b.getdata(2);
	b.display();
	//b.operator++(); this cannot be used since friend function
	operator++(b);//++b; can be used
//	++b;
	b.display();
	return 0;
	getch();
	
}
