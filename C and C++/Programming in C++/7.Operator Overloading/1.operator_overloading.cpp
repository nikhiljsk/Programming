#include<iostream>
#include<conio.h>
using namespace std;
class variable
{
	int x,y,z;
	public:
		void getdata(int a,int b,int c);
		void display();
		void operator-();
};
void variable::getdata(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void variable::display()
{
	cout<<x<<ends<<y<<ends<<z<<endl;
}
void variable::operator-()//no need to use this pointer in here even when in inline mode
{
	x=-x;
	y=-y;
	z=-z;
}
int main()
{
variable v;
v.getdata(10,-20,40);
v.display();
-v; //v.operator-();
v.display();
getch();
return 0;
}
