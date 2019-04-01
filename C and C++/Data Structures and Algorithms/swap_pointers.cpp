#include<iostream>
using namespace std;
void swapv(int *,int *);
int main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	cin>>*p>>*q;
	swapv(p,q);
	return 0;
}

void swapv(int *x,int *y)
{
	int *z;
//	int k;
//	z=&k;
	z=x;
	x=y;
	y=z;
	cout<<*x<<*y<<endl;
}


