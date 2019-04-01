#include<iostream>
#include<conio.h>
using namespace std;
class rec;
class sq
{
	int a;
	public:
	void get()
	{
		cout<<"Enter the value of side of sq"<<endl;
		cin>>a;
	}
	friend void area(sq s)
	{
		cout<<"Area of sqe="<<s.a*s.a<<endl;
	}
}s;
class rec
{
	int a,b;
	public:
	void get()
	{
		cout<<"Enter the values of length and breadth"<<endl;
		cin>>a>>b;
	}
	friend void area(rec r);
}r;
void area(rec r)
	{
		cout<<"Area of rec="<<r.a*r.b<<endl;
	}
int main()
{
	s.get();
	area(s);
	r.get();
	area(r);
}
