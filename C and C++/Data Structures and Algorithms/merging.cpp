#include<iostream>
using namespace std;
int main()
{
	int a[] = {1,3,5,7};			//arrays to be sorted
	int b[] = {2,4,6,8,9,10};		//arrays to be sorted
	int n=4,m=6;
	int c[n+m];
	int i=0,j=0,k=0;
	
	while (i<n and j<m){
		if (a[i]<b[j]){
			c[k]=a[i];
			i+=1;
		}
		else{
			c[k]=b[j];
			j+=1;
		}
		k+=1;	
	}
	
	while (i<n){
		c[k]=a[i];
		i+=1;
		k+=1;
	}
	
	while (j<m){
	c[k]=b[j];
	j+=1;
	k+=1;
	}
	
	cout<<"Resulatant array is "<<endl;
	for(i=0;i<m+n;i++)
	{
		cout<<c[i]<<endl;
	}
	return 0;
}
