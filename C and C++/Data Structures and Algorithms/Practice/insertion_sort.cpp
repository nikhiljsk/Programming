#include<iostream>
using namespace std;
int main()
{
	int n,i,j,ptr,temp,value;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	//Insertion Sort
	
	for(i=1;i<n;i++)
	{
		temp = a[i];
		ptr = i-1;
		if(temp<a[ptr])
		{
			value = temp;
			while(ptr!=0 and value<a[ptr])
			{
				a[ptr+1]=a[ptr];
				ptr -= 1;
			}
			a[ptr+1]=value;
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
	
	
}
