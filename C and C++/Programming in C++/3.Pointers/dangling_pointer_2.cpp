#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=6;
	char b='c';
	char *p=new char(b);
	cout<<p<<endl<<*p<<endl;
	delete p;
	cout<<p<<endl<<*p<<endl;
}
