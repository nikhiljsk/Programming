#include<iostream>
#include<conio.h>
using namespace std;
void display(int a,int b)
{
	if(a>b)
	{
		cout<<"The greatest number is "<<a<<endl;
	}
	else
	cout<<"The greatest number is "<<b<<endl;
}
void display(char a,char b)
{
		if(a>b)
	{
		cout<<"The greatest character is "<<a<<endl;
	}
	else
	cout<<"The greatest character is "<<b<<endl;
}
int main()
{
	int a,b;
	char x,y;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	display(a,b);
	cout<<"Enter two characters"<<endl;
	cin>>x>>y;
	display(x,y);
}
