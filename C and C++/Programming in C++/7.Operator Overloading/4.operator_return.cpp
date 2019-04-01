#include<iostream>
#include<conio.h>
using namespace std;
class integer{
	int x;
	public: 
	integer()
	{
		x=0;
	}
	integer(int y)
	{
		x=y;
	}
	integer operator-()//since we are returning an object of class we need to use classname operator-() else returntype operator-()
	{
		integer i;
		i.x=-x;
		return i;
	}
	void display()
	{
		cout<<x<<endl;
	}
};
int main()
{
	integer a,b(20),c(-9);
	a=-b;
	b.display();
	a.display();
	a=-c;
	c.display();
	a.display();
	
}

