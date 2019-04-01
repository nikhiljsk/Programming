#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=5,*p;
	p=&a;
	float b=8.9,*p1;
	p1=&b;
	char c='a';
	void *p2=&c;//if void pointer is not used,only characters are displayed as address
	cout<<a<<endl<<p<<endl<<*p;
	cout<<b<<endl<<p1<<endl<<*p1;
	cout<<c<<endl<<p2<<endl<<*(char *)p2<<endl;
	p2=&b;
	cout<<*(float *)p2;
	
}
