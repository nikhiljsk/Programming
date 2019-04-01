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
	der(int bb,int aa):bas(aa)
	{
		b=bb;
	}
	void display()
	{
		bas::display();
		cout<<b<<endl;
	}
};
class der1:public der
{
	int c;
	public:
		der1(int cc,int bb,int aa):der(bb,aa)
		{
		c=cc;	
		}
		void display()
		{
			der::display();
			cout<<c<<endl;
		}
};
int main()
{
	der1 d(7,8,9);
	d.display();
	getch();
	return 0;
}
