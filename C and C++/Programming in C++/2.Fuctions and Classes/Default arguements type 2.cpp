#include<iostream>
#include<conio.h>
using namespace std;
int func(int a,int b);
int main()
{
	int r;
	r=func(5,4);//This is given the highest priority
	cout<<r;
	return 0;
	getch();
}
int func(int a,int b=3)//no value should be given here might return an error
{
	return a+b;
}
