#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;++i)
	{
		cout<<"hel"<<endl;
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
	cout<<a[i];
	return 0;
}
