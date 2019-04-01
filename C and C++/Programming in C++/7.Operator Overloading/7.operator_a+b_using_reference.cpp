#include<iostream>
#include<conio.h>
using namespace std;
class complex{
	int real,img;
	public:
		void getdata(int m,int n);
		void operator+(complex &);
};
void complex::getdata(int m,int n)
{
	real=m;
	img=n;
}
void complex::operator+(complex &c)
{
	complex c1;
	c1.real=real+c.real;
	c1.img=img+c.img;
	cout<<c1.real<<endl<<c1.img;
}
int main()
{
	complex a,b;
	a.getdata(20,10);
	b.getdata(10,15);
	a+b;//a.operator+(b);
	getch();
	return 0;
}
