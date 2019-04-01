#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the number of rows"<<endl;
	int rows,i,j;
	cin>>rows;
	int **a=new int *[rows];
	for(i=0;i<rows;i++)
	{
		a[i]=new int [rows-i];
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows-i;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Entered data is "<<endl;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows-i;j++)
		{
			cout<<a[i][j]<<ends;
		}
		cout<<endl;
	}
}
