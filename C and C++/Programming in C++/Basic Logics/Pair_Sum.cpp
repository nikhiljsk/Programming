#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k,n,c=0;
	int a[4];
	cout<<"Enter the elements in the array"<<endl;
	for(i=0;i<4;i++)
	cin>>a[i];
	cout<<"Enter the sum you want by adding two numbers"<<endl;
	cin>>k;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<=3;j++)
		{
			if(a[i]+a[j]==k)
			{
				cout<<a[i]<<ends<<a[j]<<endl;
				c++;
			}
		}
	}
	if(c==0)
	cout<<"No pairs found"<<endl;
}
