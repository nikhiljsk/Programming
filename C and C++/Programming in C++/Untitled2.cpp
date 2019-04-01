//int* p,q;?
#include<iostream>
using namespace std;
int main()
{
	int * p,* q;
	int a=3,b=4;
	p=&a;
	q=&b;
	cout<<*p<<*q;
	cout<<endl<<p<<endl<<q
	return 0;
}
