#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	int temp=0;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j+1]<arr[j]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted array is "<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<ends;
	return 0;
}

