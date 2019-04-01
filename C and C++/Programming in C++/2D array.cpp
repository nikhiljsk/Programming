//creating a dynamic 2D array

#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	int **a=new int *[r]; //array of pointer
	int i,j;
	for(i=0;i<r;i++)
	{
		a[i]=new int [c];
	}
	
}
