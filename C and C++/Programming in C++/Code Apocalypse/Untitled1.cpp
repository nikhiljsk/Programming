#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"i="<<i<<endl;
			if(j==2)
			{
				cout<<"F"<<endl;
				goto l;
			}
		}
		l:
			;
	}
}
