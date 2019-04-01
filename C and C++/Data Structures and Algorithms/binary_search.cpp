#include<iostream>
using namespace std;
int main()
{
	int i,j,n,value,loc=-1;
	cout<<"enter size"<<endl;
	cin>>n;
	int arr[n];
	int end=n-1;
	int beg=0;
	int mid=(beg+end)/2;
	cout<<"elements"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"enter value"<<endl;
	cin>>value;
	loc=0;
	while(beg<=end && arr[mid]!=value)
	{
		if(arr[mid]>value)
		{
			end=mid-1;
		}
		else if(arr[mid]<value)
		{
			beg=mid+1;
		}
		mid=(beg+end)/2;
	}
	if(arr[mid]==value){
		loc=0;
		cout<<"value found at  "<<mid+1;
	}
	else
	cout<<"element not found"<<endl;
	return 0;
}
