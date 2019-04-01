#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,sum=0;
	float avg;
	cout<<"Enter the number of rows and columns"<<endl;
	cin>>r>>c;
	int **p=new int *[r];
	for(i=0;i<r;i++)
	{
		p[i]=new int [c];
	}
	cout<<"Enter the elements"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>p[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+p[i][j];
		}
	}
	avg=sum/(r*c);
	cout<<"sum"<<sum<<endl<<"avg"<<ends<<avg<<endl;
	
}
