#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,q,y,x;
	cin>>n;
	int a[n];
	cout<<"Enter"<<endl;
	for(q=0;q<n;q++)
	cin>>a[q];
	cout<<endl;
	for(q=0;q<n;q++)
	cout<<a[q]<<ends;
	cout<<endl<<endl<<endl;
	int b[n][n];
	for(i=0,x=0;i<2;i++,x++)
	{
		for(j=1,y=1;j<=2;j++,y++)
		{
			b[y-1][y-1]=a[i];
			b[y][y]=a[j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<b[i][j]<<ends<<ends<<ends<<ends;
		}
		cout<<endl;
	}
	return 0;
}
