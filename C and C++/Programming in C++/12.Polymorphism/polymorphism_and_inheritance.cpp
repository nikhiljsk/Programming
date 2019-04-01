#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
	protected:
	int a,b;
	public:
		void read()
		{
			cout<<"Enter the value of a&b"<<endl;
			cin>>a>>b;
		}
		void virtual cal()
		{
			cout<<"calculate area"<<endl;
		}
};
class rectangle:public shape{
	int a1;
	public:
		void cal()
		{
			a1=a*b;
			cout<<"Area of rectangle is "<<a1<<endl;
		}
		
};
class square:public shape{
	int a1;
	public:
		void cal()
		{
			a1=a*a;
			cout<<"Area of square is"<<a1<<endl;
		}
};
class triangle:public shape{
	float a1;
	public:
		void cal()
		{
			a1=(0.5)*a*b;
			cout<<"Area of triangle is "<<a1;
		}
};
int main()
{
	shape *s,s1;
	s=&s1;
	s->cal();
	rectangle r;
	r.read();
	s=&r;
	s->cal();
	square sq;
	sq.read();
	s=&sq;
	s->cal();
	triangle t;
	t.read();
	s=&t;
	s->cal();
	getch();
	return 0;
}
