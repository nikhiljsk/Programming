#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p,*q;
	int sum;
	int a,b;
	cin>>a>>b;
	p=&a;
	q=&b;
	sum=*p+*q;
	cout<<sum;
}
