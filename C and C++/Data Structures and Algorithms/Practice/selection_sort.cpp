#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp,min,loc=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	//Selection Sort
	
	min = a[0];
	for(i=0;i<n;i++)
	{
		min =a[i];
		loc = i;
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min = a[j];
				loc = j;
			}
		}
		a[loc] = a[i];
		a[i] = min;
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}
