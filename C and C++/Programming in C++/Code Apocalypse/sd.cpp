#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int a[n];
    int i,x,k,z;
    i=0;
    while(k>=10)
    {
    	x=n%10;
    	z=x+2;
    	k=n-10;
    	a[i]=z;
    	i++;
    }
    for(i=0,j=9;i<10;i++,j--)
    {
    	
    }
    for(i=0;i<10;i++)
    {
    	a[i]=a[i]+1;
    }
    for(i=0;i<10;i++)
    {
    	cout<<a[i]<<endl;
    }
    
    
    return 0;
}
