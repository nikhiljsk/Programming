#include<iostream>
#include<conio.h>
using namespace std;
void sdisplay(int x,int y)
{
int c=x+y;
cout<<"sum is "<<c;
}
void sdisplay(float z,int x)
{
	
	cout<<"sum is "<<z+x;
}
void sdisplay(int y,float z)//when fun(int,float) is used fun(float,int) should be used second time
{
	float c=z+y;
	cout<<"sum is "<<c;
}
int main()
{
	int x,y;
	float z;
	cout<<"Enter two numbers"<<endl;
	cin>>x>>y;
	cout<<"Enter a float value"<<endl;
	cin>>z;
	sdisplay(x,y);
	sdisplay(z,x);
	sdisplay(z,y);
	return 0;
	getch();
}
