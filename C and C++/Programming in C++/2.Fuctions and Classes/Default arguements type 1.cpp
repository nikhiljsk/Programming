#include<iostream>
#include<conio.h>
using namespace std;
int func(int a,int b);//if a is declared and b is not declared value of a is overwritten and there will be no value for b
int main()
{
	int r;
	r=func(5,2);//5 is given to 'a' since assignment is from left to right
	cout<<r;
	return 0;
	getch();
}
int func(int a=3,int b=3)
{
	return a+b;
}
