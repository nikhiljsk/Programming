#include<iostream>
using namespace std;
int main()
{
	int loc,i,j,n,min,temp;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	{
		min=arr[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				loc=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;
	}
	cout<<"Sorted"<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<ends;
	
}
