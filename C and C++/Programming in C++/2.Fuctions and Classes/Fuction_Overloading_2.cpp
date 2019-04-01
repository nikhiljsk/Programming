#include<iostream>
#include<conio.h>
using namespace std;
void area(int r)
{
	cout<<"Area of circle is :"<<3.14*r*r<<endl;
}
void area(float l,float b)
{
	cout<<"Area of rectangle is :"<<l*b<<endl;
	
}
void area(float s)
{
	cout<<"Area of square is :"<<s*s<<endl;
}
int main()
{int r;
float l,b,s;
cout<<"Enter the values of radius,length,breadth and side"<<endl;
cin>>r>>l>>b>>s;
area(r);
area(l,b);
area(s);
return 0;
getch();	
}
