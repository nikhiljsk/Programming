#include<iostream>
#include<conio.h>
using namespace std;
void display(int a)
{
	cout<<"a="<<a<<endl;
}
void display(int a ,int b)
{
	cout<<"a="<<a<<"b ="<<b<<endl;
}

void display(int a,float b)
{
	cout<<"a="<<a<<"b="<<b<<endl;	
}
void display(float a,int b)
{
	cout<<a<<b<<endl;
}
void display(int a,float b,char c)
{
	cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c ="<<c<<endl;
	
}
//returntype of function shows no effect in function overloading and so error is returned since a function name is used twice without change in parameters
/*/int display(int a)
{
	cout<<a;
}*/ 
int main()
{
	display(3);
	display(3,2);
	display(3,3.2f);
	display(3,5.5f,'a');
	display(3.2f,3);
	return 0;
	getch();
}
