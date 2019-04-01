#include<iostream>
#include<conio.h>
using namespace std;
class jsk
{
	public:
		int a,b;
		void get()
		{
			cout<<a<<endl<<b<<endl;
		}
};
int main()
{
	jsk j,*j1=&j;
//	j1=&j;
	int jsk::*p=&jsk::a;
	int jsk::*q=&jsk::b;
	void (jsk::*r)()=&jsk::get;
	j1->a=20;
	j.b=90;
	//(j1->*r)();
	((*j1).*r)();
}
