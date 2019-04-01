#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the size of the array"<<endl;
	int size,i,value;
	cin>>size;
	int *array=new int [size];
	cout<<"Enter the elements in the array"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>*(array+i);
	}
	cout<<"Enter the value to find"<<endl;
	cin>>value;
	for(i=0;i<size;i++)
	{
		if(*(array+i)==value)
		{
		cout<<"Value found at "<<i+1<<endl;
		break;
		}
	}
	if(i>size)
	cout<<"Value not found"<<endl;
	return 0;
	
}
