#include<iostream>
#include<conio.h>
using namespace std;
class jsk
{
	public:
		int a,b;
	//	int *p=&a;
		void get()
		{
			a=10;b=20;
			cout<<a<<b<<endl;
		}
};

main()
{	jsk j,*j1;
	j1=&j;
//	j1->get(); //(*j1).get();
	
	int jsk::*p=&jsk::a;
	int jsk::*q=&jsk::b;
	void (jsk::*z)()=&jsk::get;
	(j1->*z)();
	j1->a=30;
	cout<<j.*p;
	cout<<j1->*p;
	(j1->*z)();
	getch();
}
