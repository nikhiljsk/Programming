#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,i=1,j=0,z=1;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(i=1;z>0;i++)
	{
		z=floor(n/(pow(5,i)));
		j=j+z;
	}
	cout<<j;
	//z=floor(n/(pow(5,1)));
/*	while(z>0)
	{
		z=floor(n/(pow(5,i)));
		j=j+z;
		i++;
	}*/
	
	
}
