#include<iostream>
#include<conio.h>
using namespace std;
template<class h>
void sor(h a[],int n)
{
	int i,j;
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
	cout<<endl;
	h temp;
		for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				continue;
			}
			else
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	
	for(int i=0;i<n;i++)
	cout<<a[i];
}
int main()
{
	int n;
	cout<<"number"<<endl;
	cin>>n;
	int b[n];
	cout<<"enter"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	sor(b,n);
}
