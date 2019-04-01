#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class cal
{
	private:
		int n;
		int a,b,c,d,x,y,z;
	public:
		void calculate()
		{
		cin>>n;
		
		
		a=n%10;
		x=n/10;
		if(x>1000)
		{
			cout<<"invalid greater than 4 numbers"<<endl;
			exit(0);
		}
		b=x%10;
		y=n/100;
		c=y%10;
		d=n/1000;
		}
		void putdata()
		{
			cout<<a <<b <<c <<d<<endl;
		}
		void display();
}g;
void cal::display()
{int c=0;
	if(a%2==0)
	c++;
	if(b%2==0)
	c++;
	if(c%2==0)
	c++;
	if(d%2==0)
	c++;
	cout<<"c is "<<c<<endl;
}

int main()
{
	g.calculate();
	g.putdata();
	g.display();
	
}
