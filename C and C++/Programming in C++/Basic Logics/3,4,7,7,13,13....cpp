//3,4,7,7,13,13,21,22,31,34
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=3,b=4,i,n,z=4,y=3,count=0;
	cin>>n;
	//cout<<a<<ends<<b<<ends;
	for(i=0;i<n-2;i++)
	{
		if(i%2==0)
		{
		//cout<<a+z<<ends;
		a=a+z;
		z=z+2;
		}
		else
		{
		//cout<<b+y<<ends;
		b=b+y;
		y=y+3;
		}
	}
	if(i%2!=0)
	{
		cout<<a;
	}
	else
	cout<<b;
	getch();
	return 0;
	
	
}
