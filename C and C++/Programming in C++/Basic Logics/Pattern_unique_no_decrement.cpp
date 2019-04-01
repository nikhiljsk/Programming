#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k,a,b,c,n=9;
	b=n;
	a=n;
	c=n-1;
	for(i=1;i<=n;i++)
	{
		
		if(i%2!=0)
		{
		for(j=1;j<=a;j++)
		{
			cout<<j;
		}	
		cout<<endl;
		}
		else
		{
			for(k=1;k<=b;k++)
			{
				cout<<c;
				c--;
			}
			c=n-i-1;
			cout<<endl;
		}
		a=a-1;
		b=b-1;
		
	}
}
