#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=8;
	int *p=new int(a);
	cout<<p<<endl<<*p<<endl;
	delete p;
	cout<<p<<endl<<*p<<endl;
}
