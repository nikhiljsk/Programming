#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the no. of elements"<<endl;
	cin>>n;
	int *p=new int[n];
	cout<<"Enter the elements in the array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	int j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				int t;
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}
			else 
			continue;
		}
	}
	cout<<"Sorted array is "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<endl;
	}
	int v;
	cout<<"Enter the value to be searched"<<endl;
	cin>>v;
	int beg=0,end=n-1;
	int mid=(beg+end)/2;
	int z=1;
	while(beg<=end)
	{
		if(v<*(p+mid))
		{
			end=mid-1;
		}
		else if(v>*(p+mid))
		{
			beg=mid+1;
		}
		else
		{
			z=0;
			cout<<"Value found at location "<<mid+1<<endl;
			break;
		}
		mid=(beg+end)/2;
	}
	if(z==1)
	{
		cout<<"Value not found"<<endl;
	}
	return 0;
	getch();
}
