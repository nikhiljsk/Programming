//Converting a given number into binary number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10],b[10],n,i=0,c=0;
	cout<<"Enter a number to convert it into binary"<<endl;
	cin>>n;
	while(n!=0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
		c++;
	}
	for(i=c-1;i>=0;i--)
	{
		cout<<a[i];
	}
}
