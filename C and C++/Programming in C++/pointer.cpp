#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *p=new char* [10];
	cout<<"enter"<<endl;
	int i,j,count=0;
	char a;
	for(i=0;i<=4;i++)
	{
		cin>>*(p+i);
	}
		for(i=4;i>=0;i--)
	{
		cout<<*(p+i)<<ends;
	}
	return 0;
}
