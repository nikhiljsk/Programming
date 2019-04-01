#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=25;
	int &b=a;//b is a reference to a
	cout<<&a<<&b<<endl;
	cout<<a<<b<<endl;
	b=20;
	cout<<a<<b<<endl;
	cout<<&a<<&b;
	return 0;
	getch();
}
