#include<iostream>
#include<conio.h>
using namespace std;
class bas
{
	protected:
		int a;
		public:
			bas(int a1)
			{
				a=a1;
			}
			void display()
			{
				cout<<a<<endl;
			}
};
class der:public bas
{
	protected : int b;
	public:
	der(int bb,int aa):bas(aa)//der(int aa):bas(aa); to assign only a single value to a and b
	{
		b=bb;
	}
	void display()
	{
		bas::display();
		cout<<b<<endl;
	}
};
int main()
{
	der d(7,8);//if der d(7); to assign only a single value
	d.display();//since there are two displays one in base and other in derived,fucntion overriding is used and then derived class is given the hightest preference
	getch();
	return 0;
}
