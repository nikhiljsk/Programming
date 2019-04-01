#include<iostream>
using namespace std;
int main(){
	int k,i,j,n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	int temp,ptr;
	for(i=1;i<n;i++){
		temp=arr[i];
		ptr=i-1;
		while(temp<arr[ptr] && ptr>0){
			arr[ptr+1]=arr[ptr];
			ptr=ptr-1;
		}
		arr[ptr+1]=temp;
	}
		cout<<"Sorted array is "<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<ends;
	return 0;
}
