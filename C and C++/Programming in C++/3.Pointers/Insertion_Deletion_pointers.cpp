#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements in the array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Elements saved"<<endl;
	int pos,val;
	cout<<"Enter the position you want to insert an element"<<endl;
	cin>>pos;
	cout<<"Enter the value in the position"<<endl;
	cin>>val;
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[i]=val;
	cout<<"Data inserted"<<endl;
	for(i=0;i<n+1;i++)
	cout<<a[i]<<endl;
	cout<<"Enter the position to be deleted"<<endl;
	cin>>pos;
	for(i=pos-1;i<=n-1;i++)
	{
		a[i]=a[i+1];
	}
	cout<<"Data deleted"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
	return 0;
	getch();
		
}
