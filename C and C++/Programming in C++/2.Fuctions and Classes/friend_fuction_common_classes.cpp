#include<iostream>
#include<conio.h>
using namespace std;
class second;
class first
{
	int a;
	public: void getvalue()
	{
		cout<<"Enter no";
		cin>>a;
	}
	friend void sum(first f,second s);
}f;


class second
{ int b;
public:
void getvalue()
{
	cout<<"Enter no";
	cin>>b;
}
friend void sum(first f,second s);
}s;


void sum(first f,second s)
{
	int sum;
	sum=f.a+s.b;
	cout<<sum;
}
int main()
{
	f.getvalue();
	s.getvalue();
	sum(f,s);
	getch();
	return 0;
}
