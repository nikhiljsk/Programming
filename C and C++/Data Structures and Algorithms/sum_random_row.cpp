#include<iostream>
using namespace std;
int main()
{
	int row,col[10],i,j,row1,sum=0;
	cout<<"Enter the  number of rows"<<endl;
	cin>>row;
	int **a=new int *[row];
	for(i=0;i<row;i++)
	{
		cout<<"Enter the columns number for row "<<i+1<<endl;
		cin>>col[i];
		a[i]=new int [col[i]];
	}
	for(i=0;i<row;i++)
	{
		cout<<"Enter the "<<col[i]<<" elements in the pattern of row "<<i+1<<endl;
		for(j=0;j<col[i];j++)
		{
			
			cin>>a[i][j];
		}
	}
	cout<<endl<<endl<<"Entered data is "<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col[i];j++)
		{
			cout<<a[i][j]<<ends;
		}
		cout<<endl;
	}
	cout<<"Enter row"<<endl;
	cin>>row1;
	for(i=0;i<col[row1];i++)
	{
		sum=sum+a[row1][i];
	}
	cout<<sum;
	return 0;
}
