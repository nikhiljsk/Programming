/*Rows input from user
	1
	12	
	123
	1234*/
	//also find the reverse of it ....
	//							  ...
	//							  ..		
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
		a[i]=new int [i+1];
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Entered data is "<<endl;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<a[i][j]<<ends;
		}
		cout<<endl;
	}
}
