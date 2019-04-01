#include<iostream>
#include<conio.h>
using namespace std;
class variable
{
	int x,y,z;
	public:
		void getdata(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<x<<ends<<y<<ends<<z<<endl;
		}
		void operator!()// ! operator returns false if true value and vice versa	
		{
			x=!x;
			y=!y;
			z=!z;
		}
};
int main()
{
	variable v;
	v.getdata(1,0,-5);
	v.display();
	!v;//v.operator!();
	v.display();
	getch();
	return 0;
}
