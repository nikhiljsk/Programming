#include<iostream>
#include<conio.h>
using namespace std;
class increment
{
	int x;
	public:
		increment(int y)
		{
			x=y;
		}
		void operator++(int)
		{
			x++;
		}
		void display()
		{
			cout<<x<<endl;
		}
		
};
class decreament
{
	int x;
	public:
	decreament(int y)
	{
		x=y;
	}
	void operator--()
	{
		x--;
	}
	void display()
	{
		cout<<x;
	}	
};

int main()
{
	increment a(10);
	//++a;
	//for the compiler to distinguish between pre and post increament we use parameter
	//when parameter is used we can only post increment the value and cannot pre increament it
	//a.operator++()----pre increament   a.operator++(int)-----post increament
	a++;
	a.display();
	decreament b(10);
	--b;
	b.display();
	getch();
	return 0;
	
}
