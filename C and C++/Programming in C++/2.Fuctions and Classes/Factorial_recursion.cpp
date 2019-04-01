#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n)
{
	if(n==1||n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{	
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
	cout<<fact(a);
	
}
