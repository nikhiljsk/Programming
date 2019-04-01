#include<iostream>
#include<conio.h>
using namespace std;
int r=0;
int reverse(int n)
{
	int a;
	a=n%10;
	n=n/10;
	r=r*10+a;
	if(n==0)
	{
	return r;
	}
	reverse(n);
	return r;
}
int main()
{
	int n;
	cout<<"Enter  a number"<<endl;
	cin>>n;
	cout<<reverse(n);
	
}
