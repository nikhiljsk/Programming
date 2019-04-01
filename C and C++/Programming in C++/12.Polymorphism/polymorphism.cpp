#include<iostream>
#include<conio.h>
using namespace std;
class base{
	public:
		virtual void display()	//??
		{
			cout<<"base"<<endl;
		}
};
class der:public base{
	public:
		void display()
		{
			cout<<"Der"<<endl;
		}
};
int main()
{
	base b,*b1;
	der d;
	b1=&b;
	b1->display();
	b1=&d;
	b1->display();
	getch();
}
