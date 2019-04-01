#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int on=n;							//stores a copy of original number of elements
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int b[n];							//stores a copy original array
	for(i=0;i<n;i++)
	b[i]=a[i];
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;++k)
				{
					a[k]=a[k+1];
				}
				--n;
			}
			else
			++j;
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<ends;
	cout<<endl;
	int c[n];
	for(i=0;i<n;i++)
	c[i]=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<on;j++)
		{
			if(a[i]==b[j])
			{
				c[i]++;
			}
		}
	}
	cout<<"Number"<<"\t"<<"Frequency"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t\t"<<c[i]<<endl;
	
	
	
	return 0;
}
