#include<iostream>
#include<conio.h>
using namespace std;
class inc
{
	int x;
	public:
		inc()
		{
		x=0;
		}
		inc(int x)
		{
			this->x=x;
		}
		inc operator++()
		{
			inc i;
			i.x=++x;
			return i;
		}
		void display()
		{
			cout<<x<<endl;
		}
		
};

class decr
{
	int x;
	public:
		decr(int x)
		{
			this->x=x;
		}
		void display()
		{
			cout<<x<<endl;
		}
		friend void operator--(decr &b);
};
void operator--(decr &b)
{
	--b.x;
	cout<<"b.x="<<b.x<<endl;
}
int main()
{
inc a(20);
decr b(2);
inc c;
c=++a;
operator--(b);
a.display();
c.display();
b.display();
}
