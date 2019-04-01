#include<iostream>
using namespace std;
int main(){
	int n,i,j,k,on;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	on=n;
	int a[n],b[n];
	cout<<"Enter the elements in the array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				n-=1;
			}
			else
			j+=1;
		}
	}
	
	cout<<"Set is "<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
	int c[n];
	for(i=0;i<n;i++)
	c[i]=0;
	cout<<"Element\t\tFrequency"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<on;j++)
		{
			if(b[j]==a[i])
			c[i]+=1;
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t\t\t"<<c[i]<<endl;
	return 0;
}
