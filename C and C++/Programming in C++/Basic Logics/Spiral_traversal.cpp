#include<iostream>
using namespace std;
int main(){
	int n,m,i,j,rows,cols;
	cout<<"Enter the size of the matrix"<<endl;
	cin>>m>>n;
	int arr[m][n];
	cout<<"Enter the elements in the matrix"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	rows=m;
	cols=n;
	i=0;
	j=0;
	while(cols!=0)
	{
		cout<<"i"<<i<<endl;
	for(j=j;j<cols;j++)
		cout<<arr[i][j]<<endl;
	
	j=j-1;
	
	for(i=1;i<rows;i++)
		cout<<arr[i][j]<<endl;
		
	i=i-1;
	
	for(j=cols-2;j>=0;j--)
		cout<<arr[i][j]<<endl;
		
	j=j+1;
	
	for(i=rows-2;i>=1;i--)
		cout<<arr[i][j]<<endl;
	i+=1;
	}
	return 0;
}
