#include<iostream>
#include<conio.h>
using namespace std;
class abc
{
	int x;
	public:
	void getdata(int a)
	{
		x=a;
	}
	void display()
	{
		cout<<x;
	}
	friend abc operator+(abc &q,abc &r);
};
abc operator+(abc &q,abc &r)
{
	abc s;
	s.x=q.x+r.x;
	return s;
}
int main()
{
	abc a,b,c;
	a.getdata(5);
	b.getdata(7);
	c=a+b;//called as operator+(a,b)
	c.display();
	getch();
}

