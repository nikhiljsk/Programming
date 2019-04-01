#include<iostream>
#include<conio.h>
using namespace std;
class hours
{
	int h;	
	public:
	hours()
	{
	
	}	
	void display()
	{
		cout<<"Hours="<<h<<endl;
	}
	void setdata(int a)
	{
		h=a;
	}
};
class minutes
{
	int m;
	
	public:
		minutes(int a)
		{
			m=a;
		}
		void display()
		{
			cout<<m;
		}
		operator hours()
		{
			hours h2;
			h2.setdata(m/60);
			return h2;
		}
};
int main()
{
	minutes m1(120);
	hours h1;
	h1=m1;
	//m1.display();
	h1.display();
}
