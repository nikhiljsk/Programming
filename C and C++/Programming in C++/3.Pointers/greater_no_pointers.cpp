#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p,*q;
	int a,b;
	p=&a;
	q=&b;
	cin>>*p>>*q;
	if(*p>*q)
	{
		cout<<"a is greater"<<endl;
	}
	else 
	cout<<"b"<<endl;
}
